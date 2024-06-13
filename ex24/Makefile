# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 11:15:51 by dagarmil          #+#    #+#              #
#    Updated: 2024/06/13 12:47:42 by dagarmil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: libft.a
SRCS = ./srcs
INCLUDES = ./includes
CFLAGS = -Wall -Wextra -Werror

OBJS := ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o 
OBJS := $(addprefix $(SRCS)/, $(OBJS))

LIB = $(INCLUDES)/libft.h

libft.a : $(OBJS)
	ar rcs $@ $<

$(SRCS)/%.o : $(SRCS)/%.c
	cc -c -I$(INCLUDE) $(CFLAGS) $< -o $@

.PHONY: all clean fclean re

clean:
	rm -rf $(SRCS)/*.o

fclean:
	rm -f $(SRCS)/*.o libft.a

re:
	make fclean all
