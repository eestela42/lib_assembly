.text
global ft_strlen

my_strlen:
	xor rax, rax
	.loop:
		cmp rdi + rax, 0
		je return
		inc rax
		jmp loop

	.return:
		ret