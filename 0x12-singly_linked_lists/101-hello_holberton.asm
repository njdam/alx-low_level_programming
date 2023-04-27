section .data
	hello db 'Hello, Holberton', 10, 0 ; "db" as define byte for hello array

section .test
	global main      ; as main function to start program
	extern printf    ; declaration of printf function

main:
	push rbp         ; setting up stack frame
	mov rbp, rsp

	lea rdi, [hello] ; loading address of message into rdi
	xor eax, eax     ; clears eax
	call printf      ; callling printf function

	mov rsp, rbp     ; move back to stack pointer from bp
	pop rbp          ; restore base pointer
	xor eax, eax     ; clears eax again
	ret              ; for exiting program
