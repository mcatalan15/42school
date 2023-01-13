# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcatalan <mcatalan@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 17:57:01 by mcatalan          #+#    #+#              #
#    Updated: 2022/12/11 22:04:05 by mcatalan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRC = $(wildcard *.c)
CFLAGS = -I./include -Wextra -Werror -Wall
all:	$(NAME)
$(NAME):	$(SRC)
	gcc $(CFLAGS) -o $(NAME) $(SRC)
clean:
	rm -f rush-02
fclean: clean
	rm -f rush-02
re:
	fclean all