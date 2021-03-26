; # **************************************************************************** #
; #                                                                              #
; #                                                         :::      ::::::::    #
; #    ft_strcpy.s                                        :+:      :+:    :+:    #
; #                                                     +:+ +:+         +:+      #
; #    By: fballest <marvin@42.fr>                    +#+  +:+       +#+         #
; #                                                 +#+#+#+#+#+   +#+            #
; #    Created: 2021/02/24 11:22:43 by fballest          #+#    #+#              #
; #    Updated: 2021/02/24 11:23:40 by fballest         ###   ########.fr        #
; #                                                                              #
; # **************************************************************************** #

section		.text
		global		_ft_strcpy      ; Nombre de la función
_ft_strcpy:
		mov			rax, rdi        ; Copia la primera cadena a rax
repeat:
		cmp			byte[rsi], 0	; Comprueba que exite algo aún en rsi
		je			finished        ; Si no hay nada en rsi manda a finished
		movsb						; copia desde DS:(E)SI a ES:(E)DI (de rsi a rdi), byte a byte
; movsb: byte a byte - movsw: word a word - movsd: doubleword a doubleword 
        jmp			repeat			; vuelve a ejecutar el repeat haciendo una recursiva
finished:
		mov			byte[rdi], 0x0  ; No estoy seguro que sea NECESARIO
		ret
