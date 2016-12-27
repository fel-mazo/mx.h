# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fel-mazo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/05 13:42:55 by fel-mazo          #+#    #+#              #
#    Updated: 2016/12/27 11:32:49 by fel-mazo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
NAME	= libft.a
CFLAGS	= -Wall -Wextra -Werror
SRC		= ft_memalloc.c ft_putchar.c ft_putstr.c ft_memset.c ft_putnbr.c\
		  ft_putnbr_fd.c ft_putchar_fd.c

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
