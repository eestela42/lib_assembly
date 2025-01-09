section .text
global ft_strcpy

ft_strcpy:
	mov rcx, 0
	loop:
		mov al, BYTE[rsi + rcx]
		mov BYTE[rdi + rcx], al
		cmp BYTE[rsi + rcx], 0
		je exit
		inc rcx
		jmp loop

	exit:
		mov rax, rdi
		ret
