#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <sys/time.h>
#include <locale.h>
#include <stdint.h>

//
// die with error
//
void diep(char *str) {
    fprintf(stderr, "[-] %s: %s\n", str, strerror(errno));
    exit(EXIT_FAILURE);
}

//
// return a random integer within a range
//
// fast pcg32 from wikipedia example
//
static uint64_t state = 0x4d595df4d0f33173u;
static uint64_t const multiplier = 6364136223846793005u;
static uint64_t const increment  = 1442695040888963407u;

static uint32_t rotr32(uint32_t x, unsigned r) {
    return x >> r | x << (-r & 31);
}

uint32_t pcg32() {
    uint64_t x = state;
    unsigned count = (unsigned)(x >> 59);

    state = x * multiplier + increment;
    x ^= x >> 18;
    return rotr32((uint32_t)(x >> 27), count);
}

void pcg32_init(uint64_t seed) {
    state = seed + increment;
    pcg32();
}

int rnd(int low, int high) {
    // return rand() % (high - low + 1) + low;
    return pcg32() % (high - low + 1) + low;
}

void init(uint64_t seed) {
    // srand(seed);
    pcg32_init(seed);
}

//
// fill an array with random numbers
//
int *randomize(int *items, int length) {
    int i;

    for(i = 0; i < length; i++)
        items[i] = rnd(0, 512);

    return items;
}

//
// array print
//
void dump(int *items, int length) {
    int i;

    printf("[+] items: ");

    for(i = 0; i < length - 1; i++)
        printf("%d, ", items[i]);

    printf("%d\n", items[i]);
}

//
// check if the array is ordered (asc)
//
int sorted(int *items, int length) {
    int i;

    for(i = 0; i < length - 1; i++)
        if(items[i] > items[i + 1])
            return 0;

    return 1;
}

//
// the bogosort
//
int *bogosort(int *items, int *result, int *temp, int length) {
    int index, i;

    memcpy(temp, items, sizeof(int) * length);

    // on each pass, we chose a random item on the
    // array, the array is reduced after each iteration
    for(i = 0; length; i++, length--) {
        // choosing an available item
        index = rnd(0, length - 1);

        // push the item on the result array
        result[i] = temp[index];

        // moving last item to the current position
        // to resize the array
        temp[index] = temp[length - 1];
    }

    return result;
}

int main(int argc, char *argv[]) {
    int length = 4;
    int *items, *result, *temp;
    long long iterations = 0;
    struct timeval begin, end, diff;
    float elapsed = 0;
    uint64_t possibilities = 1;

    setlocale(LC_NUMERIC, "");

    if(argc > 1)
        length = atoi(argv[1]);

    for(int i = 2; i <= length; i++) {
        possibilities *= i;
    }

    printf("[+] bogosort on %d items (possibilities: %'lu)\n", length, possibilities);

    //
    // allocating buffers
    //
    if(!(items = (int *) malloc(sizeof(int) * length)))
        diep("malloc");

    if(!(result = (int *) malloc(sizeof(int) * length)))
        diep("malloc");

    if(!(temp = (int *) malloc(sizeof(int) * length)))
        diep("malloc");

    //
    // generating items
    //
    init(time(NULL));

    randomize(items, length);
    memcpy(result, items, sizeof(int) * length);

    dump(items, length);

    //
    // bogosort
    //
    printf("[+] sorting...\n");
    gettimeofday(&begin, NULL);

    while(!sorted(result, length)) {
        bogosort(items, result, temp, length);
        iterations++;
    }

    gettimeofday(&end, NULL);
    dump(result, length);

    //
    // statistics
    //
    timersub(&end, &begin, &diff);
    elapsed = (float) diff.tv_sec + (((float) diff.tv_usec) / 1000000);

    printf("[+] sort count: %'lld\n", iterations);
    printf("[+] sort time : %02.2f seconds (%.2f minutes)\n", elapsed, elapsed / 60);
    printf("[+] sort speed: %.2fM sort/seconds\n", (iterations / elapsed) / 1000000);

    free(items);
    free(result);
    free(temp);

    return 0;
}
