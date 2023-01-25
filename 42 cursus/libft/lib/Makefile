# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcatalan <mcatalan@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 12:46:11 by mcatalan          #+#    #+#              #
#    Updated: 2023/01/25 12:57:16 by mcatalan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = $(wildcard *.c)

OBJ = $(NAME)

all: $(NAME)

$(NAME):		$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: clean all
	make clean