# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcatalan <mcatalan@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 12:40:23 by mcatalan          #+#    #+#              #
#    Updated: 2023/01/25 12:54:55 by mcatalan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ = $(SRC:.o)

LIB = -L./lib/my -lmy

SRC = $(wildcard *.c) $(wildcard */*.c)

CFLAGS = -I./include

NAME = prueba

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my/
	gcc $(CFLAGS) $(OBJ) $(LIB) -o $(NAME)
	
clean:
	rm -f $(OBJ)
	
fclean:
	rm -f $(NAME)
	cd ./lib/my ; $(NAME) -f Makefile fclean

re: clean all
	make clean