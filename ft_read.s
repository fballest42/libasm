; # **************************************************************************** #
; #                                                                              #
; #                                                         :::      ::::::::    #
; #    ft_read.s                                          :+:      :+:    :+:    #
; #                                                     +:+ +:+         +:+      #
; #    By: fballest <fballest@student.42.fr>          +#+  +:+       +#+         #
; #                                                 +#+#+#+#+#+   +#+            #
; #    Created: 2021/02/10 11:00:00 by fballest          #+#    #+#              #
; #    Updated: 2021/02/10 11:00:15 by fballest         ###   ########.fr        #
; #                                                                              #
; # **************************************************************************** #

; OJO EN ESTA FUNCION rdi = file descriptor, rsi = cadena, rdx = contador de bytes

_ft_read:
		mov			rax, 0x2000003	; Indica la llamada del sistema a Read
		syscall                     ; Llama al sistema
		jc			error			; llama a error para comprobar si ha leido si falla la llamada
		ret                         ; Retorna el file descriptor asignado en rax
error:
		push rax					; mueve a rax la cima de la pila
		call ___error				; rax apunta a la variable resultante de la llamada del sistema.
		pop qword[rax]				; Mueve a rax la variable anterior si existe 
		mov rax, -1					; pone en rax -1 para indicar el error
		ret                         ; retorna rax

