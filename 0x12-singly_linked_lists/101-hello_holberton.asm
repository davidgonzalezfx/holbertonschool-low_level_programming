	SECTION .data
fmt: 	db "%s", 10, 0
msg:	db "Hello, Holberton"

	SECTION .text
	extern printf
	global main
main:
	mov  esi, msg
	mov  edi, fmt
	mov  eax, 0
	call printf

	mov eax, 0
	ret
