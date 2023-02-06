# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 12:56:14 by mcatalan@st       #+#    #+#              #
#    Updated: 2023/01/25 19:08:40 by mcatalan@st      ###   ########.fr        #
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