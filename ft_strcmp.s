; # **************************************************************************** #
; #                                                                              #
; #                                                         :::      ::::::::    #
; #    ft_strcmp.s                                        :+:      :+:    :+:    #
; #                                                     +:+ +:+         +:+      #
; #    By: fballest <fballest@student.42.fr>          +#+  +:+       +#+         #
; #                                                 +#+#+#+#+#+   +#+            #
; #    Created: 2021/02/10 10:59:05 by fballest          #+#    #+#              #
; #    Updated: 2021/02/10 10:59:10 by fballest         ###   ########.fr        #
; #                                                                              #
; # **************************************************************************** #

			section		.text
			global		_ft_strcmp          ; Nombre de la función
finished:
			cmp 	byte[rsi], 0			; Compara si rsi existe
			je 		finished				; Llama a exit si no existe
increment:
			inc		rdi                     ; Aumenta rdi
			inc 	rsi                     ; Aumenta rsi
			cmp 	byte[rdi], 0            ; Compara si rdi existe
			je		_ft_strcmp				; Llama de nuevo a la funcion si
_ft_strcmp:
			movzx	rax, byte[rdi]			; Mueve el byte a rax rellenando con 0 si son iguales
			movzx	rcx, byte[rsi]          ; Mueve el byte a rcs rellenando con 0 si son iguales
			sub		rax, rcx				; Compara rax con rcx y devuelve el valor a los flags
			jz		finished				; Salta a finished si es cero
finished:
			ret                             ; Realiza el retorno
