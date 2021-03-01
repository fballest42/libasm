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

global  _ft_strcpy
    section     .test
_ft_strcpy:
            xor         rax, rax                ; contador a cero
            jmp         count                   ; comparador
plus:
            inc         rax                     ; incrementador
count:
            cmp         BYTE [rdi + rax], 0     ; condicion comparador
            jne         plus                    ; Ejecuta si se cumple
done:
            ret


