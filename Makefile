# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artavagy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/05 15:05:09 by artavagy          #+#    #+#              #
#    Updated: 2026/02/05 17:42:47 by artavagy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c
OBJS = 	ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o ft_atoi.o ft_calloc.o ft_strdup.o
 

all: $(NAME) main

$(NAME): $(OBJS)
	ar rcs $@ $^

main: main.o $(SRC)
	$(CC) $(CFLAGS) $^ -o main

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	rm -f  *.o

fclean : clean
	rm -f $(NAME) main
re: fclean all
.PHONY: all clean fclean re
