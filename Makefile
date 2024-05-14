# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-ser <juan-ser@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 09:52:56 by juan-ser          #+#    #+#              #
#    Updated: 2024/05/14 11:11:15 by juan-ser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a
LIB = ft_printf.h

SRCS = ft_pointer.c ft_printf.c ft_putchar.c ft_putnbr_base.c ft_putnbr.c ft_putstr.c ft_strlen.c


all: $(NAME)

$(NAME): $(OBJS) $(LIB)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS) $(LIB)
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re