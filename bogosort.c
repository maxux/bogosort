#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <sys/time.h>

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
int rnd(int low, int high) {
	return rand() % (high - low + 1) + low;
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
	
	if(argc > 1)
		length = atoi(argv[1]);
	
	printf("[+] bogosort on %d items\n", length);
	
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
	srand(time(NULL));
	
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

	printf("[+] sort count: %lld\n", iterations);
	printf("[+] sort time : %02.2f seconds\n", elapsed);
	printf("[+] sort speed: %.2fM sort/seconds\n", (iterations / elapsed) / 1000000);
	
	return 0;
}
