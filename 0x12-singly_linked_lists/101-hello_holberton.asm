section .data
    hello db "Hello, Holberton", 10   ; Message to print
    len equ $-hello                 ; Length of the message

section .text
    global main

main:
    ; Open standard output file descriptor
    mov rax, 0x02     ; System call for open()
    mov rdi, 0x01     ; File descriptor for stdout
    mov rsi, 0x02     ; Open for writing
    xor rdx, rdx      ; File mode
    syscall

    ; Write message to stdout
    mov rax, 0x01     ; System call for write()
    mov rdi, rax      ; Use the return value from open() as file descriptor
    mov rsi, hello    ; Pointer to the message
    mov rdx, len      ; Message length
    syscall

    ; Close file descriptor for stdout
    mov rax, 0x03     ; System call for close()
    mov rdi, 0x01     ; File descriptor for stdout
    syscall

    ; Exit
    mov rax, 0x3C     ; System call for exit()
    xor rdi, rdi      ; Return code 0
    syscall

