# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcatalan <mcatalan@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/04 19:10:12 by mcatalan@st       #+#    #+#              #
#    Updated: 2023/04/13 10:43:55 by mcatalan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line.a

#BONUS = .bonus

CFLAGS = -Wall -Wextra -Werror

SRCS = 	get_next_line.c			\
		get_next_line_utils.c	\

#SRCSB = ft_lstnew.c 		\
		ft_lstadd_front.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c	\
		ft_lstdelone.c		\
		ft_lstclear.c		\
		ft_lstiter.c		\
		ft_lstmap.c			\

OBJS = $(SRCS:.c=.o)

#OBJSBONUS = $(SRCSB:.c=.o)

INCLUDE = -I ./

RM = rm -f

DEPS = $(SRCS:.c=.d)

#DEPS_BONUS = $(SRCSB:.c=.d)

%.o: %.c get_next_line.h
	${CC} ${CFLAGS} -MMD $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)

	ar -rcs $(NAME) $(OBJS)

-include $(DEPS)

#bonus: $(BONUS)

#$(BONUS) : $(OBJS) $(OBJSBONUS)

#	ar -rcs $(NAME) $(OBJS) $(OBJSBONUS)

#-include $(DEPS_BONUS)

clean:
	$(RM) $(OBJS) $(DEPS) 
# $(OBJSBONUS) $(DEPS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
.PHONY: all bonus clean fclean re
