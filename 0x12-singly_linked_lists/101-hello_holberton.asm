section .data
    hello db "Hello, Holberton", 10, 0  ; 10 is the ASCII code for newline, 0 is the null terminator

section .text
    global main

extern printf

main:
    lea rdi, [hello]  ; Load the address of the hello string into rdi register
    call printf       ; Call printf function to print the string
    mov rax, 60       ; syscall: exit
    xor rdi, rdi      ; status: 0
    syscall           ; invoke syscall to exit the program
