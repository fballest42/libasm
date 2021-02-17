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
    section     .text
ft_strlen:
            xor         rax, rax                ; contador a cero
            jmp         count                   ; comparador
plus:
            inc         rax                     ; incrementador
count:
            cmp         BYTE [rdi + rax], 0     ; condicion comparador
            jne         plus                    ; Ejecuta si se cumple
done:
            ret



