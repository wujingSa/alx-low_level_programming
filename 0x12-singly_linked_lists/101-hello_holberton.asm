extern printf

section .data
    msg db "Hello, Holberton", 0
    fmt db "%s", 10, 0

section .text
global main

main:
    xor rax, rax       ; Zero out RAX
    mov rdi, fmt       ; First argument: pointer to format string
    mov rsi, msg       ; Second argument: pointer to the string to print
    call printf        ; Call the C function

    xor rax, rax       ; Zero out RAX again to set the return value
    ret                ; Return
