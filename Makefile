# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fballest <fballest@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/10 11:03:34 by fballest          #+#    #+#              #
#    Updated: 2021/05/21 13:16:23 by fballest         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.DELETE_ON_ERROR:

SRCS		=	ft_strlen.s ft_strcpy.s ft_strcmp.s ft_strdup.s ft_read.s ft_write.s
OBJS		=	$(SRCS:.s=.o)

NA			=	nasm
NA_FLAGS	=	-f macho64
FLAGS 		=	-Wall -Werror -Wextra
NAME		=	libasm.a
HEADER		=	libasm.h
TEST		=	test

%.o:			%.s
				$(NA) $(NA_FLAGS) $< -o $@

$(NAME):		$(OBJS) $(HEADER)
				ar rcs $(NAME) $(OBJS)

all:			$(NAME)

clean:
				rm -rf $(OBJS)

fclean:			clean
				rm -rf $(NAME) $(BONUS) $(TEST) $(TEST_BONUS)

re:				fclean $(NAME)

test:			$(NAME)
				gcc $(FLAGS) main.c $(NAME) -o $(TEST)
				./$(TEST)

.PHONY:			clean fclean re test bonus test_bonus
