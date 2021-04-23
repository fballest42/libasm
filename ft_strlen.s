; # **************************************************************************** #
; #                                                                              #
; #                                                         :::      ::::::::    #
; #    ft_strlen.s                                        :+:      :+:    :+:    #
; #                                                     +:+ +:+         +:+      #
; #    By: fballest <fballest@student.42.fr>          +#+  +:+       +#+         #
; #                                                 +#+#+#+#+#+   +#+            #
; #    Created: 2021/02/10 10:58:16 by fballest          #+#    #+#              #
; #    Updated: 2021/04/23 12:25:35 by fballest         ###   ########.fr        #
; #                                                                              #
; # **************************************************************************** #

    section.text
    global  _ft_strlen
_ft_strlen:
            mov         rax, 0                  ; contador a cero
counter:
            cmp			byte [rdi + rax], 0		; compara byte a byte
			jz			done					; Si es cero salta a done
			inc			rax						; Si no es cero incrementa rax
			jmp			counter                 ; Vuelve a ejecutarse

done:
            ret                                 ; Si llega a exit devuelve rax
