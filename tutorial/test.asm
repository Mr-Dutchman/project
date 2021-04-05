section .code
    global _start
_start:
    mov edx,len
    mov ecx,msg ;message to write
    mov ebx,1 ;file discriptor(stdout)
    mov eax,4 ;system call number (sys_write)
    int 0x80 ;call kernel

    mov edx,9
    mov ecx,s2
    mov ebx,1
    mov eax,4
    int 0x80
    
    mov eax,1 ;sys_exit
    int 0x80

section .data
msg db "hello world!", 0ax
len equ $ -msg
s2 times 9 db '*'