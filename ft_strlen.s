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
<<<<<<< HEAD
            jmp         count                   ; comparador
=======
            jmp         count                   ; salta a comparador
>>>>>>> 21157d83160d2d6f2ec7456603037cd2acdd72e2
plus:
            inc         rax                     ; incrementador de rax que será el retorno
count:
<<<<<<< HEAD
            cmp         BYTE [rdi + rax], 0     ; condicion comparador
            jne         plus                    ; Ejecuta si no se cumple la condición anterior
=======
            cmp         BYTE [rdi + rax], 0     ; condicion comparador para comprobar si se ha terminado
            jne         plus                    ; Ejecuta si no se cumple
>>>>>>> 21157d83160d2d6f2ec7456603037cd2acdd72e2
done:
            ret
