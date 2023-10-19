SECTION .data
    msg db "Hello, Holberton", 0    ; Null-terminated string
    fmt db "%s", 10, 0              ; Format string: "%s\n"

SECTION .text
    extern printf
    global main

main:
    mov rdi, fmt      ; Load the format string address into rdi register
    mov rsi, msg      ; Load the message address into rsi register
    xor rax, rax      ; Clear RAX register (used for the printf return value)
    call printf       ; Call printf function to print the string

    xor rax, rax      ; Set return value to 0 (exit status)
    ret               ; Return from the main function
