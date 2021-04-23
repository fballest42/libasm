; # **************************************************************************** #
; #                                                                              #
; #                                                         :::      ::::::::    #
; #    ft_strcpy.s                                        :+:      :+:    :+:    #
; #                                                     +:+ +:+         +:+      #
; #    By: fballest <marvin@42.fr>                    +#+  +:+       +#+         #
; #                                                 +#+#+#+#+#+   +#+            #
; #    Created: 2021/02/24 11:22:43 by fballest          #+#    #+#              #
; #    Updated: 2021/04/23 12:24:18 by fballest         ###   ########.fr        #
; #                                                                              #
; # **************************************************************************** #

		section		.text
		global		_ft_strcpy      ; Nombre de la función
_ft_strcpy:
		mov			rax, rdi        ; Copia la primera cadena a rax
copy:
		cmp			byte[rsi], 0	; Comprueba que exite algo la segunda cadena rsi
		je			done	        ; Si no hay nada en rsi manda a done
		movsb						; copia desde rsi a rdi byte a byte
									; movsb: byte a byte - movsw: word a word - movsd: doubleword a doubleword 
        jmp			copy			; vuelve a ejecutar el repeat haciendo una recursiva
done:
		mov			byte[rdi], 0x0  ; Pone el caracter final de cadena, pero no se si hace falta.
		ret
