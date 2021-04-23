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

global		_ft_strcmp

section		.text

_ft_strcmp:
	xor		rax, rax
	xor		rdx, rdx
	xor		rcx, rcx
compare:
	mov		al, [rdi + rcx]
	mov		dl, [rsi + rcx]
	cmp		al, 0
	jz		done
	cmp		dl, 0
	jz		done
	cmp		al, dl
	jnz		done
	inc		rcx
	jmp		compare
done:
	sub		rax, rdx
	ret

; 			section		.text
; 			global		_ft_strcmp          ; Nombre de la función
; _ft_strcmp:
; 			cmp 	byte[rsi], 0			; Compara si rsi existe
; 			je 		done					; Llama a exit si no existe
; 			cmp		byte[rsi], 0
; 			je		done
; increment:
; 			inc		rdi                     ; recorre rdi
; 			inc 	rsi                     ; recorre rsi
; 			cmp 	byte[rdi], 0            ; Compara si el byte correspondiente de rdi existe
; 			je		compare					; Llama de nuevo a la funcion si
; compare:
; 			movzx	rax, byte[rdi]			; Mueve el byte a rax rellenando con 0 si son iguales
; 			movzx	rcx, byte[rsi]          ; Mueve el byte a rcs rellenando con 0 si son iguales
; 			sub		rax, rcx				; Compara rax con rcx y devuelve el valor a los flags
; 			jz		_ft_strcmp					; Salta a check en función del flag
; done:
; 			sub		rax, rcx
; 			ret                             ; Realiza el retorno
