# bogosort

a simple implementation of bogosort in C

# runtime (small list)

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

# runtime (12 items)

there is one chance in 479,001,600 to sort the array on each sort

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

# runtime (13 items)

there is one chance in 6,227,020,800 to sort the array on each sort

	[waiting new test with corrected algo]

# runtime (14 items)

there is one chance in 87,178,291,200 to sort the array on each sort
	
	[waiting new test with corrected algo]

# runtime (15 items)

there is one chance in 1,307,674,368,000 to sort the array on each sort

	[waiting new test with corrected algo]

# runtime (16 items)

there is one chance in 20,922,789,888,000 to sort the array on each sort, will i am lucky ?
	
	[waiting new test with corrected algo]
