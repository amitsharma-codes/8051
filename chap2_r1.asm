;Review Question 1.
;Write the instructions to move 34H into A and 3FH to B
/*cseg at 0
	mov a,#0x34
	mov b,#0x3f
	end*/
;Review Question 1.
;Write the instructions to add 16H and CDH into R7
cseg at 0
	mov a,#0x16
	add a,#0xcd
	mov r7,a
	end