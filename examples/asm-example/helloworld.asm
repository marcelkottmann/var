global _start

extern toJSON

; define constants
SYSCALL_WRITE        equ 1
STDOUT               equ 1
STDERR               equ 2

MAX_CWD_LEN  equ 256

section .data
	errorMsg    db  "Buffer too small",10  ; define error message
        errorMsgLen equ $-errorMsg             ; automatically determine errorMsg length

section .bss
	name        resb MAX_CWD_LEN

section .text
_start:
        mov rdi, name               ; buffer to fill serialized json in
        mov rsi, MAX_CWD_LEN        ; len of buffer
        call toJSON

        cmp rax, 0                  ; rax == 0 in error case
	je error                    ; jump to error handler if == 0

	mov rax, SYSCALL_WRITE
        mov rdi, STDOUT
        mov rsi, name
	mov rdx, MAX_CWD_LEN
        syscall

        mov rdi, 0              ; setting exit code to 0 / success
        jmp exit

error:
	mov rax, SYSCALL_WRITE
        mov rdi, STDERR
        mov rsi, errorMsg
	mov rdx, errorMsgLen
        syscall

        mov rdi, 1              ; setting exit code to 1

exit:
	mov rax, 60
        syscall
