; # **************************************************************************** #
; #                                                                              #
; #                                                         :::      ::::::::    #
; #    ft_strcmp.s                                        :+:      :+:    :+:    #
; #                                                     +:+ +:+         +:+      #
; #    By: fballest <fballest@student.42.fr>          +#+  +:+       +#+         #
; #                                                 +#+#+#+#+#+   +#+            #
; #    Created: 2021/02/10 10:59:05 by fballest          #+#    #+#              #
; #    Updated: 2021/04/23 12:23:41 by fballest         ###   ########.fr        #
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
