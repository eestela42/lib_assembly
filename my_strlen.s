.text

my_strlen:
.L1:
#SETUP pour gagner 1 register
	push rbp
	mov rbp, rsp
#get argument
	mov	QWORD PTR -24[rbp], rdi
	cmp	QWORD PTR -24[rbp], 0
	jne .L2
	mov eax, 1
	jmp .L3

.L2:
#RETURN parceque NULL


.L3:
#ce n'est pas NULL
