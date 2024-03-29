; # **************************************************************************** #
; #                                                                              #
; #                                                         :::      ::::::::    #
; #    ft_strdup.s                                        :+:      :+:    :+:    #
; #                                                     +:+ +:+         +:+      #
; #    By: fballest <fballest@student.42.fr>          +#+  +:+       +#+         #
; #                                                 +#+#+#+#+#+   +#+            #
; #    Created: 2021/02/10 11:00:40 by fballest          #+#    #+#              #
; #    Updated: 2021/04/23 12:25:05 by fballest         ###   ########.fr        #
; #                                                                              #
; # **************************************************************************** #

; OJO EN ESTA FUNCION rdi = file descriptor, rsi = cadena, rdx = contador

	section		.text
		global		_ft_strdup          ; Nombre de la función
		extern		_malloc             ; Indica que se llamara a esta dunción externa
		extern		_ft_strcpy          ; Indica que se llamara a esta dunción externa
		extern		_ft_strlen          ; Indica que se llamara a esta dunción externa
_ft_strdup:
		xor			rax, rax			; No necesario
		push		rdi					; Prepara rdi
		call		_ft_strlen			; Mide rdi e indica el valor en rax
        je          reserve             ; Salta a la función reserva memoría para el valor indicado en rax

reserve:
		inc			rax					; Incrementa rax
		mov			rdi, rax			; Mueve rax a rdi
		call		_malloc				; Reserva en rax
		pop			rsi					; Pasa de rdi a rsi
		sub			rax, 0				; chequea si se ha hecho la reserva
		je			done		        ; Si no se ha hecho va a done
		mov			rdi, rax            ; Mueve rax a rdi
		call 		_ft_strcpy			; Copia de rsi a rax
done:
		ret                             ; retorna rax

