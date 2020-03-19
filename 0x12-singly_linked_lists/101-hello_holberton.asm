	SECTION .data
fmt: 	db "%s", 10, 0
msg:	db "Hello, Holberton"

	SECTION .text
	extern printf
	global main
main:
	mov  edx, msg
	mov  esi, 1
	mov  edi, fmt
	mov  eax, 0
	call printf

	mov ebx, 0
	mov eax, 1
	ret
