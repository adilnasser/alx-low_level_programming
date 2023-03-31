	section .data
	hello db 'Hello, Holberton', 0x0a ; The string to print
	section .text
	global main
main:
	push rbp 		; Save the base pointer
	mov rbp, rsp 	; Set up the stack frame
	mov rdi, hello 	; Load the address of the string into the first argument register
	xor eax, eax 	; Set the return value to zero
	call printf	; Call the printf function
	mov rsp, rbp 	; Restore the stack pointer
	pop rbp	; Restore the base pointer
	    ret	; Return to the operating system
