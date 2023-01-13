# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 17:57:01 by mcatalan          #+#    #+#              #
#    Updated: 2022/12/14 15:57:10 by mcatalan@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = $(wildcard *.c)

CFLAGS = -I./include -Wextra -Werror -Wall

all:	$(NAME)

$(NAME):	$(SRC)
	gcc $(CFLAGS) -o $(NAME) $(SRC)
	
clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all
	make clean