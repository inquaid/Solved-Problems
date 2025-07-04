section .data
  msg db "Hello, Pop!_OS!", 10
  len equ $ - msg

section .text
  global _start

_start:
  mov rax, 1          ; syscall: sys_write
  mov rdi, 1          ; stdout
  mov rsi, msg
  mov rdx, len
  syscall

  mov rax, 60         ; syscall: sys_exit
  xor rdi, rdi
  syscall
