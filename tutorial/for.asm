global _start
section .text
_start:
    xor edi, edi

loop1:
    add edi, 'o'

    mov eax,4
    mov ebx,1
    mov ecx, [edi]
    mov edx, 1
    int 0x80

    sub edi, '0'
    mov edi, 1
    cmp edi, 5
    jl loop1