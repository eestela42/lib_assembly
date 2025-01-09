section .text

global ft_strdup

extern malloc
extern ft_strlen
extern ft_strcpy
extern __errno_location

ft_strdup:
	call ft_strlen
	push rdi
	inc rax
	mov rdi, rax
	call malloc wrt ..plt
	cmp rax, 0
	je error
	mov rdi, rax
	pop rsi
	call ft_strcpy
	ret


	error:
		neg rax
		push rax
		call __errno_location wrt ..plt;
		pop qword[rax];
		mov rax, -1
		ret