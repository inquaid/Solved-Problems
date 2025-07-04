section .data
    msg db "Hello, world!", 0

section .text
    global _start

_start:
    ; write(1, msg, 13)
    mov rax, 1          ; syscall number for write
    mov rdi, 1          ; file descriptor (stdout)
    mov rsi, msg        ; pointer to message
    mov rdx, 13         ; message length
    syscall

    ; exit(0)
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; exit code 0
    syscall
