# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fel-mazo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/05 13:42:55 by fel-mazo          #+#    #+#              #
#    Updated: 2016/12/29 18:27:06 by fel-mazo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
NAME	= testmatrix
CFLAGS	= -Wall -Wextra -Werror
SRC		= creation.c util.c main.c ops.c
LIB		= ./lib_subset

OBJ		= $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c -I . $^

$(NAME) : $(OBJ)
	make -C ./lib_subset
	$(CC) $(CFLAGS) -L$(LIB) -lft -o $(NAME) $(OBJ)

clean :
	make -C ./lib_subset clean
	rm -f $(OBJ)

fclean : clean
	make -C ./lib_subset fclean
	rm -f $(NAME)

re : fclean $(NAME)
