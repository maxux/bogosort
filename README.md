# bogosort

A simple implementation of bogosort in C

More information: https://en.wikipedia.org/wiki/Bogosort

# Runtime (small list)

Intel(R) Core(TM) i5-4210U CPU @ 2.4GHz

	[+] bogosort on 2 items
	[+] items: 337, 405
	[+] sorting...
	[+] items: 337, 405
	[+] sort count: 0
	[+] sort time: 0.00 seconds, -nan sort/seconds

	[...]
	
	[+] bogosort on 8 items
	[+] items: 154, 292, 240, 394, 500, 136, 312, 457
	[+] sorting...
	[+] items: 136, 154, 240, 292, 312, 394, 457, 500
	[+] sort count: 32915
	[+] sort time: 0.01 seconds, 4328074 sort/seconds
	
	[+] bogosort on 9 items
	[+] items: 154, 292, 240, 394, 500, 136, 312, 457, 254
	[+] sorting...
	[+] items: 136, 154, 240, 254, 292, 312, 394, 457, 500
	[+] sort count: 198246
	[+] sort time: 0.03 seconds, 6491143 sort/seconds
	
	[+] bogosort on 10 items
	[+] items: 154, 292, 240, 394, 500, 136, 312, 457, 254, 198
	[+] sorting...
	[+] items: 136, 154, 198, 240, 254, 292, 312, 394, 457, 500
	[+] sort count: 2923458
	[+] sort time: 0.45 seconds, 6461894 sort/seconds
	
	[+] bogosort on 11 items
	[+] items: 154, 292, 240, 394, 500, 136, 312, 457, 254, 198, 390
	[+] sorting...
	[+] items: 136, 154, 198, 240, 254, 292, 312, 390, 394, 457, 500
	[+] sort count: 28106593
	[+] sort time: 4.69 seconds, 5997203 sort/seconds

# Runtime (12 items)

There is one chance in 479,001,600 to sort the array on each sort

	[+] bogosort on 12 items
	[+] items: 253, 18, 211, 300, 448, 11, 395, 308, 293, 355, 488, 421
	[+] sorting...
	[+] items: 11, 18, 211, 253, 293, 300, 308, 355, 395, 421, 448, 488
	[+] sort count: 43322408
	[+] sort time: 7.85 seconds, 5521094 sort/seconds

	[+] bogosort on 12 items
	[+] items: 92, 378, 148, 252, 405, 413, 115, 509, 181, 436, 244, 432
	[+] sorting...
	[+] items: 92, 115, 148, 181, 244, 252, 378, 405, 413, 432, 436, 509
	[+] sort count: 459454680
	[+] sort time: 83.87 seconds, 5478026 sort/seconds
	
	[+] bogosort on 12 items
	[+] items: 54, 174, 181, 322, 220, 182, 15, 141, 331, 294, 392, 296
	[+] sorting...
	[+] items: 15, 54, 141, 174, 181, 182, 220, 294, 296, 322, 331, 392
	[+] sort count: 684290083
	[+] sort time: 124.30 seconds, 5505118 sort/seconds

# Runtime (13 items)

There is one chance in 6,227,020,800 to sort the array on each sort

	[+] bogosort on 13 items
	[+] items: 260, 451, 348, 431, 479, 87, 383, 369, 88, 195, 199, 83, 240
	[+] sorting...
	[+] items: 83, 87, 88, 195, 199, 240, 260, 348, 369, 383, 431, 451, 479
	[+] sort count: 4101547985
	[+] sort time : 812.36 seconds
	[+] sort speed: 5.05M sort/seconds

	[+] bogosort on 13 items
	[+] items: 224, 495, 31, 248, 310, 320, 273, 328, 298, 272, 27, 246, 143
	[+] sorting...
	[+] items: 143, 224, 246, 246, 248, 272, 273, 298, 320, 320, 320, 495, 495
	[+] sort count: 41139810
	[+] sort time : 7.94 seconds
	[+] sort speed: 5.18M sort/seconds
	
	[+] bogosort on 13 items
	[+] items: 483, 343, 301, 390, 92, 260, 463, 319, 405, 81, 394, 225, 223
	[+] sorting...
	[+] items: 81, 92, 223, 225, 260, 319, 343, 390, 394, 405, 405, 463, 463
	[+] sort count: 872236238
	[+] sort time : 174.76 seconds
	[+] sort speed: 4.99M sort/seconds

# Runtime (14 items)

There is one chance in 87,178,291,200 to sort the array on each sort
	
	[+] bogosort on 14 items
	[+] items: 321, 506, 328, 229, 159, 185, 101, 373, 422, 57, 450, 56, 264, 395
	[+] sorting...
	[+] items: 56, 101, 159, 185, 229, 321, 328, 373, 373, 395, 395, 422, 506, 506
	[+] sort count: 1039035409
	[+] sort time : 215.79 seconds
	[+] sort speed: 4.81M sort/seconds

	[+] bogosort on 14 items
	[+] items: 508, 1, 422, 159, 411, 33, 457, 437, 418, 377, 351, 122, 389, 319
	[+] sorting...
	[+] items: 1, 33, 122, 122, 159, 377, 377, 389, 411, 422, 437, 437, 457, 508
	[+] sort count: 18245551922
	[+] sort time : 3798.31 seconds
	[+] sort speed: 4.80M sort/seconds


# Runtime (15 items)

There is one chance in 1,307,674,368,000 to sort the array on each sort

	[+] bogosort on 15 items
	[+] items: 299, 159, 201, 206, 223, 27, 390, 176, 463, 490, 423, 306, 57, 68, 24
	[+] sorting...
	[+] items: 24, 24, 57, 57, 159, 176, 201, 206, 223, 390, 390, 423, 463, 490, 490
	[+] sort count: 24687722532
	[+] sort time : 5422.66 seconds
	[+] sort speed: 4.55M sort/seconds
	
	[+] bogosort on 15 items
	[+] items: 442, 59, 436, 200, 29, 268, 390, 15, 370, 377, 320, 468, 456, 120, 70
	[+] sorting...
	[+] items: 15, 29, 59, 200, 268, 320, 370, 370, 390, 390, 436, 456, 468, 468, 468
	[+] sort count: 37323500892
	[+] sort time : 8556.80 seconds
	[+] sort speed: 4.36M sort/seconds



# Runtime (16 items)

There is one chance in 20,922,789,888,000 to sort the array on each sort, will I get lucky ?
	
	[waiting new test with corrected algo]
