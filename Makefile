# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fel-mazo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/29 18:41:03 by fel-mazo          #+#    #+#              #
#    Updated: 2016/12/30 00:52:14 by fel-mazo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
NAME	= libmx.a
CFLAGS	= -Wall -Wextra -Werror
SRC		= creation.c ops.c util.c

OBJ		= $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c -I . $^

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)
