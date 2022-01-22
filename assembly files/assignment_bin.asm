cseg at 0
	mov a,#0x10
	mov r0,#0x30
	mov r7,#8
	loop:
	rlc a
	jnc zero
	mov @r0,#49
	zero:
	jc one
	mov @r0,#48
	one:
	inc r0
	djnz r7,loop
	end