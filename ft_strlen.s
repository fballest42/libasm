; # **************************************************************************** #
; #                                                                              #
; #                                                         :::      ::::::::    #
; #    ft_strlen.s                                        :+:      :+:    :+:    #
; #                                                     +:+ +:+         +:+      #
; #    By: fballest <fballest@student.42.fr>          +#+  +:+       +#+         #
; #                                                 +#+#+#+#+#+   +#+            #
; #    Created: 2021/02/10 10:58:16 by fballest          #+#    #+#              #
; #    Updated: 2021/02/17 14:16:07 by fballest         ###   ########.fr        #
; #                                                                              #
; # **************************************************************************** #

global  _ft_strlen
_ft_strlen:
            mov         rax, 0                  ; contador a cero
            jmp         count                   ; salta a comparador
plus:
            inc         rax                     ; incrementador
count:
            cmp         BYTE [rdi + rax], 0     ; condicion comparador para comprobar si se ha terminado
            jne         plus                    ; Ejecuta si no se cumple
done:
            ret



