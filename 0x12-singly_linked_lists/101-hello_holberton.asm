section .data
	format db "Hello, Holberton", 10, 0

section .text
	global main

extern printf
extern exit

main:
	sub rsp, 8

	mov rdi, format
	xor eax, eax
	call printf

	xor edi, edi
	call exit
