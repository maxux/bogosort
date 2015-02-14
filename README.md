# bogosort

a simple implementation of bogosort in C

# runtime (small list)

	[+] bogosort on 1 items
	[+] items: 337
	[+] sorting...
	[+] items: 337
	[+] sort count: 0
	[+] sort time: 0.00 seconds, -nan sort/seconds

	[+] bogosort on 2 items
	[+] items: 337, 405
	[+] sorting...
	[+] items: 337, 405
	[+] sort count: 0
	[+] sort time: 0.00 seconds, -nan sort/seconds

	[+] bogosort on 3 items
	[+] items: 337, 405, 90
	[+] sorting...
	[+] items: 0, 90, 405
	[+] sort count: 2
	[+] sort time: 0.00 seconds, 1000000 sort/seconds

	[+] bogosort on 4 items
	[+] items: 337, 405, 90, 210
	[+] sorting...
	[+] items: 210, 210, 337, 405
	[+] sort count: 11
	[+] sort time: 0.00 seconds, 2750000 sort/seconds

	[+] bogosort on 5 items
	[+] items: 337, 405, 90, 210, 347
	[+] sorting...
	[+] items: 90, 210, 337, 405, 405
	[+] sort count: 36
	[+] sort time: 0.00 seconds, 3272727 sort/seconds

	[+] bogosort on 6 items
	[+] items: 337, 405, 90, 210, 347, 356
	[+] sorting...
	[+] items: 90, 210, 347, 347, 356, 405
	[+] sort count: 33
	[+] sort time: 0.00 seconds, 3300000 sort/seconds

	[+] bogosort on 7 items
	[+] items: 337, 405, 90, 210, 347, 356, 223
	[+] sorting...
	[+] items: 90, 223, 337, 347, 356, 405, 405
	[+] sort count: 62
	[+] sort time: 0.00 seconds, 2066667 sort/seconds

	[+] bogosort on 8 items
	[+] items: 337, 405, 90, 210, 347, 356, 223, 83
	[+] sorting...
	[+] items: 83, 83, 90, 337, 347, 356, 405, 405
	[+] sort count: 632
	[+] sort time: 0.00 seconds, 2759825 sort/seconds

	[+] bogosort on 9 items
	[+] items: 337, 405, 90, 210, 347, 356, 223, 83, 336
	[+] sorting...
	[+] items: 83, 90, 223, 337, 347, 347, 356, 405, 405
	[+] sort count: 31682
	[+] sort time: 0.01 seconds, 2470331 sort/seconds

	[+] bogosort on 10 items
	[+] items: 337, 405, 90, 210, 347, 356, 223, 83, 336, 82
	[+] sorting...
	[+] items: 82, 82, 83, 210, 223, 223, 347, 347, 405, 405
	[+] sort count: 52710
	[+] sort time: 0.02 seconds, 2976789 sort/seconds

	[+] bogosort on 11 items
	[+] items: 337, 405, 90, 210, 347, 356, 223, 83, 336, 82, 103
	[+] sorting...
	[+] items: 82, 90, 103, 210, 336, 337, 347, 347, 356, 405, 405
	[+] sort count: 105046
	[+] sort time: 0.02 seconds, 5282941 sort/seconds

# runtime (12 items)

	[+] bogosort on 12 items
	[+] items: 337, 405, 90, 210, 347, 356, 223, 83, 336, 82, 103, 512
	[+] sorting...
	[+] items: 82, 83, 90, 103, 210, 223, 336, 356, 356, 405, 512, 512
	[+] sort count: 7218840
	[+] sort time: 1.27 seconds, 5669096 sort/seconds

	[+] bogosort on 12 items
	[+] items: 324, 232, 495, 88, 165, 33, 219, 468, 290, 269, 347, 356
	[+] sorting...
	[+] items: 88, 165, 219, 269, 290, 290, 290, 324, 347, 347, 495, 495
	[+] sort count: 2406471
	[+] sort time: 0.46 seconds, 5287448 sort/seconds

	[+] bogosort on 12 items
	[+] items: 317, 126, 340, 464, 222, 341, 41, 500, 17, 69, 121, 238
	[+] sorting...
	[+] items: 41, 69, 121, 121, 126, 238, 238, 340, 464, 464, 500, 500
	[+] sort count: 5014222
	[+] sort time: 0.89 seconds, 5650828 sort/seconds

# runtime (13 items)

	[+] bogosort on 13 items
	[+] items: 160, 122, 32, 111, 291, 299, 304, 434, 434, 338, 315, 347, 69
	[+] sorting...
	[+] items: 32, 69, 69, 111, 122, 160, 299, 304, 304, 315, 338, 434, 434
	[+] sort count: 114904401
	[+] sort time: 23.60 seconds, 4869539 sort/seconds

	[+] bogosort on 13 items
	[+] items: 320, 254, 475, 164, 32, 353, 164, 187, 73, 413, 46, 390, 78
	[+] sorting...
	[+] items: 32, 46, 73, 78, 164, 164, 187, 187, 320, 413, 413, 475, 475
	[+] sort count: 358728054
	[+] sort time: 72.59 seconds, 4941677 sort/seconds

	[+] bogosort on 13 items
	[+] items: 349, 267, 249, 463, 346, 61, 101, 324, 292, 154, 65, 183, 488
	[+] sorting...
	[+] items: 61, 65, 101, 183, 183, 249, 267, 292, 324, 463, 463, 488, 488
	[+] sort count: 8177043
	[+] sort time: 1.62 seconds, 5043578 sort/seconds

# runtime (14 items)
	
	[+] bogosort on 14 items
	[+] items: 277, 414, 164, 458, 269, 77, 32, 195, 245, 435, 387, 215, 372, 32
	[+] sorting...
	[+] items: 32, 32, 164, 215, 215, 245, 269, 277, 372, 372, 414, 458, 458, 458
	[+] sort count: 735670553
	[+] sort time: 157.48 seconds, 4671460 sort/seconds

	[+] bogosort on 14 items
	[+] items: 207, 491, 76, 31, 21, 99, 298, 501, 281, 410, 37, 36, 236, 234
	[+] sorting...
	[+] items: 21, 31, 36, 37, 76, 234, 236, 281, 298, 298, 298, 410, 410, 491
	[+] sort count: 567714452
	[+] sort time: 119.97 seconds, 4732047 sort/seconds

# runtime (15 items)

still waiting...
