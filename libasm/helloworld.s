global    start
    section   .text
start:
    mov       rax, 0x02000004       ; system call for write
    mov       rdi, 1                ; file handle 1 is stdout
    mov       rsi, message          ; addres os string to output
    mov       rdx, 12               ; number of bytes to write
    syscall                         ; invoque operating system to do write
    mov       rax, 0x02000001       ; system call for exit
    xor       rdi, rdi              ; invoque operating system to exit
    syscall
    
    section   .data
message:  
    db        "Hello World!", 10    ; new line at the end

; COMPILAR .s en .o
; nasm -f macho64 helloworld.s 
; CREAR EJECUTABLE hello PARAA EJCECUTAR con ./hello
; ld -macosx_version_min 10.7.0 -o hello helloworld.o