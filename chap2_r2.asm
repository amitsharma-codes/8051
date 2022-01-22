/*cseg at 0
mov r0,#26
mov r1,#36
mov a,#0
add a,r0
mov r2,a
end
cseg at 0x100
	my_data_1: db "Earth"
		my_data_2: db "987-65"
			my_data_3: db "GABEH 98"
				end
cseg at 0
	mov a,#95
	add a,#120
	end
cseg at 0
	mov a,#54h
	add a,#0c4h
	mov a,#00
	add a,#0ffh
	mov a,#250
	add a,#05
	end
cseg at 0
	orl psw,#0x08
	mov r0,#0x10
	push psw
	pop psw
	end
cseg at 0
	mov r2,#0xff
	loop:
	push 0x02
	djnz r2,loop
	mov r2,#0xff
	pool:
	pop 0x00
	djnz r2,pool
	end*/
	mov sp,#52h
	mov a,#04
	mov r0,#05h
	