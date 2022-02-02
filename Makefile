# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arocha-l <arocha-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 11:54:37 by arocha-l          #+#    #+#              #
#    Updated: 2022/02/01 16:04:05 by arocha-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	./libft/ft_atoi.c		\
	./libft/ft_isalnum.c		\
  	./libft/ft_isprint.c		\
	./libft/ft_memcpy.c		\
	./libft/ft_strchr.c		\
	./libft/ft_strlcpy.c		\
	./libft/ft_strnstr.c		\
	./libft/ft_tolower.c		\
	./libft/ft_atoi.c			\
	./libft/ft_isalpha.c		\
	./libft/ft_itoa.c			\
	./libft/ft_memmove.c		\
	./libft/ft_strdup.c		\
	./libft/ft_strlen.c		\
	./libft/ft_strrchr.c		\
	./libft/ft_toupper.c		\
	./libft/ft_bzero.c		\
	./libft/ft_isascii.c		\
	./libft/ft_memchr.c		\
	./libft/ft_memset.c		\
	./libft/ft_strjoin.c		\
	./libft/ft_strmapi.c		\
	./libft/ft_strtrim.c		\
	./libft/ft_calloc.c		\
	./libft/ft_isdigit.c		\
	./libft/ft_memcmp.c		\
	./libft/ft_split.c		\
	./libft/ft_strlcat.c		\
	./libft/ft_strncmp.c		\
	./libft/ft_substr.c		\
	./libft/ft_striteri.c		\
	./libft/ft_putchar_fd.c	\
	./libft/ft_putstr_fd.c	\
	./libft/ft_putendl_fd.c	\
	./libft/ft_putnbr_fd.c \
	ft_printf.c

SRCSB = ./libft/ft_lstnew.c			\
		./libft/ft_lstadd_front.c		\
		./libft/ft_lstsize.c			\
		./libft/ft_lstlast.c			\
		./libft/ft_lstadd_back.c		\
		./libft/ft_lstdelone.c		\
		./libft/ft_lstclear.c			\
		./libft/ft_lstiter.c			\
		./libft/ft_lstmap.c

INCS	= ft_printf.h
OBJS	= $(SRCS:c=o)
OBJSB	= $(SRCSB:c=o)
NAME	= libftprintf.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

.PHONY: all bonus clean fclean re

all:	$(NAME)

.c.o: 
	$(CC) $(CFLAGS) -I$(INCS) -c $< -o ${<:.c=.o}

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus:	$(OBJSB)
	ar rc $(NAME) $(OBJSB)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
		$(RM) $(NAME)

re:	fclean all
