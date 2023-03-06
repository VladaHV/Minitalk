# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/05 19:22:22 by vhonchar          #+#    #+#              #
#    Updated: 2023/02/27 14:22:04 by vhonchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
AR = ar
ARFLAGS = rc
RM = rm -f
SRCS = ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_format.c \
		ft_putptr.c \
		ft_puthex.c \
		ft_putuint.c \

OBJS = ${SRCS:.c=.o}

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

all : $(NAME)

clean :
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re : fclean $(NAME)