section .data
    msg db "Hello, Holberton", 10 ; 10 is ASCII code for newline
    len equ $-msg              ; get the length of the string

section .text
    global main

main:
    ; write message to stdout
    mov edx, len
    mov ecx, msg
    mov ebx, 1      ; file descriptor for stdout
    mov eax, 4      ; system call for write
    int 0x80

    ; exit program
    mov eax, 1      ; system call for exit
    xor ebx, ebx    ; return 0
    int 0x80
