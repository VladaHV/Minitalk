# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 13:12:51 by vhonchar          #+#    #+#              #
#    Updated: 2023/03/06 12:41:41 by vhonchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

SRCS	=	server.c
SRCC	=	client.c
SRCSB	=	bs_server.c
SRCCB	=	bs_client.c

all: sc clean

sc: printf libft
		$(CC) $(CFLAGS) $(SRCS) printf.a -o server
		$(CC) $(CFLAGS) $(SRCC) libft.a printf.a -o client

bonus: printf libft
		$(CC) $(CFLAGS) $(SRCSB) printf.a -o server
		$(CC) $(CFLAGS) $(SRCCB) libft.a printf.a -o client
		$(RM) libft.a printf.a
		
printf:
		@make -C lib/ft_printf
		@cp lib/ft_printf/libftprintf.a ./printf.a

libft:
		@make -C lib/libft
		@cp lib/libft/libft.a .

clean:
		$(RM) libft.a printf.a
		make -C lib/libft clean
		make -C lib/ft_printf clean

fclean: clean
		make -C lib/libft fclean
		make -C lib/ft_printf fclean
		$(RM) server client		

re: fclean all

.PHONY: all, sc, printf, libft, clean, fclean, re, bonus