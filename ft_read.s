; # **************************************************************************** #
; #                                                                              #
; #                                                         :::      ::::::::    #
; #    ft_read.s                                          :+:      :+:    :+:    #
; #                                                     +:+ +:+         +:+      #
; #    By: fballest <fballest@student.42.fr>          +#+  +:+       +#+         #
; #                                                 +#+#+#+#+#+   +#+            #
; #    Created: 2021/02/10 11:00:00 by fballest          #+#    #+#              #
; #    Updated: 2021/04/23 12:22:51 by fballest         ###   ########.fr        #
; #                                                                              #
; # **************************************************************************** #

; OJO EN ESTA FUNCION rdi = file descriptor, rsi = cadena, rdx = contador de bytes

	section		.text
	global		_ft_read
	extern		___error
_ft_read:
		mov			rax, 0x2000003	; Indica la llamada del sistema a Read
		syscall                     ; Llama al sistema
		jc			herror			; llama a herror si falla la llamada del sistema
		ret                         ; Retorna el file descriptor asignado en rax
herror:
		push rax					; mueve a rax la cima de la pila
		call ___error				; rax apunta a la variable resultante de la llamada del sistema.
		pop qword[rax]				; Mueve a rax la variable anterior si existe 
		mov rax, -1					; pone en rax -1 para indicar el error
		ret                         ; retorna rax

