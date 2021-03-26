# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_write.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fballest <fballest@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/10 10:59:26 by fballest          #+#    #+#              #
#    Updated: 2021/02/10 10:59:39 by fballest         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

	section		.text
		global		_ft_write               ; Nombre de la función
		extern		___error                ; Indica que se llamara a esta dunción externa
_ft_write:
				mov			rax, 0x2000004	; Llamada del sistema a la funcion Write
				syscall						; Llamada del sistema
				jc			error			; Si falla ejecuta error
				ret                         ; Retorna el resultado determinado por error o por syscall
error:
				push rax					; Alinea la pila a 16 bits para hacer la llamada 
				call ___error				; rax toma el valor de la variable externa errno.
				pop qword[rax]				; Alinea la pila a 64 bits.
				mov rax, -1					; Da a rax el valor -1 como retorno de error
				ret                         ; retorna rax
