# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/04 10:58:09 by mcatalan@st       #+#    #+#              #
#    Updated: 2023/07/05 17:44:41 by mcatalan@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

LIBTEST     = ftprintf

NAME 	= 	libftprintf.a

SRC		= 	src/ft_printf.c			\
			src/ft_putchar_m.c		\
			src/ft_putstr_m.c			\
			src/ft_printnbr.c		\

OBJ 	= 	$(SRC:.c=.o)

INCLUDES = includes/ft_printf.h

CFLAGS  =  -Wall -Werror -Wextra

%.o:%.c $(INCLUDES)
	@ $(CC) $(CFLAGS) -c $< -o $@
	@echo "compiling: $<"

$(NAME):	$(OBJ)
			ar -rcs $(NAME) $(OBJ)

all:		$(NAME)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			all clean

.PHONY:		all bonus clean fclean re