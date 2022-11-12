# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebennix <ebennix@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 04:53:15 by ebennix           #+#    #+#              #
#    Updated: 2022/11/10 20:53:06 by ebennix          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CFLAGS := -Wall -Wextra -Werror
HEADER := libft.h
CC := cc
SRC := ft_atoi.c    ft_itoa.c       ft_putnbr_fd.c  ft_strlcpy.c	  ft_tolower.c    \
	ft_bzero.c      ft_memchr.c     ft_putstr_fd.c  ft_strlen.c		  ft_toupper.c    \
	ft_calloc.c     ft_memcmp.c     ft_split.c      ft_strmapi.c	  ft_substr.c     \
	ft_isalnum.c    ft_memcpy.c     ft_strchr.c     ft_strncmp.c	  ft_substr.c     \
	ft_isalpha.c    ft_substr.c     ft_strdup.c     ft_strnstr.c	  ft_isprint.c    \
	ft_isascii.c    ft_memset.c     ft_striteri.c   ft_strrchr.c	  ft_putendl_fd.c \
	ft_isdigit.c    ft_putchar_fd.c ft_strjoin.c    ft_strtrim.c	  ft_strlcat.c    \
	ft_memmove.c

OBJ := $(SRC:.c=.o)
AR := ar -rc
RM := rm -rf

all : $(NAME)

$(NAME):$(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o:%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re