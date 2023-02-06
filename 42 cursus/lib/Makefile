# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/02 14:57:20 by mcatalan@st       #+#    #+#              #
#    Updated: 2023/02/05 19:27:24 by mcatalan@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

####	VARIABLES	####
CC = gcc

CFLAGS = -Wall -Wextra -Werror -std=c99

SRC_DIR = src/

OBJ_DIR = obj/

SRC_FILES	=	print

SOURCES = 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))

OBJECTS = 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

OBJF		=	.cache_exists

EXECUTABLE = program

INCLUDES = -I./includes/include/

LIB_DIR = lib/my

LIB = -L./$(LIB_DIR) -lft

####	COLORS	####

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

#### COMMANDS ####

all: libft $(EXECUTABLE) 

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJECTS) $(LIB) -o $(EXECUTABLE)
	@echo "$(MAGENTA)======>$(GREEN)$(EXECUTABLE) compiled! $(MAGENTA)<======$(DEF_COLOR)"


$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
	@echo "$(MAGENTA)======>$(GREEN)Compiling: $(YELLOW)$< $(DEF_COLOR)"
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJF):
		@mkdir -p $(OBJ_DIR)

clean:
	rm -f $(OBJECTS)
	@echo "$(MAGENTA)======>$(BLUE)$(EXECUTABLE) object files cleaned!$(DEF_COLOR)"

fclean: clean
	rm -f $(EXECUTABLE)
	@echo "$(MAGENTA)======>$(CYAN)$(EXECUTABLE)executable files cleaned!$(DEF_COLOR)"
	make -C $(LIB_DIR) fclean	

re: fclean all

libft:
	make -C $(LIB_DIR)
