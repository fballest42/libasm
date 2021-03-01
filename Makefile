# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fballest <fballest@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/10 11:03:34 by fballest          #+#    #+#              #
#    Updated: 2021/02/25 10:58:36 by fballest         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.DELETE_ON_ERROR:

SRCS		=	ft_strlen.s ft_strcpy.s
OBJS		=	$(SRCS:.s=.o)
# BONUS_SRCS	=	
# BONUS_OBJS	=	$(BONUS_SRCS:.s=.o)

NA			=	nasm
NA_FLAGS	=	-f macho64
FLAGS 		=	-Wall -Werror -Wextra
NAME		=	libasm.a
HEADER		=	libasm.h
# TEST		=	test
# TEST_BONUS	=	test_bonus

%.o:			%.s
				$(NA) $(NA_FLAGS) $< -o $@

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADER)
				ar rcs $(NAME) $(OBJS)

clean:
				rm -rf $(OBJS) $(BONUS_OBJS)

fclean:			clean
				rm -rf $(NAME) $(BONUS) $(TEST) $(TEST_BONUS)

re:				fclean $(NAME)

test:			$(NAME)
				gcc $(FLAGS) -I main.c -L. -lasm -o $(TEST)
				./$(TEST) < Makefile

#bonus:			$(OBJS) $(BONUS_OBJS)
#				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

# test_bonus:		bonus
#				gcc $(FLAGS) -I. main_bonus.c -L -lasm -o $(TEST_BONUS) main_bonus.c
#				./$(TEST_BONUS)

.PHONY:			clean fclean re test bonus test_bonus
