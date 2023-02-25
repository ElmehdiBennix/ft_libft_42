# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebennix <ebennix@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 04:53:15 by ebennix           #+#    #+#              #
#    Updated: 2023/02/25 08:08:34 by ebennix          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

CFLAGS := -g -Wall -Wextra -Werror

HEADER := libft.h

CC := cc

FILES := ft_atoi		 ft_itoa	        ft_putnbr_fd	     ft_strlcpy		   ft_tolower	   \
		 ft_bzero	     ft_memchr	     	ft_putstr_fd	     ft_strlen	 	   ft_toupper	   \
		 ft_calloc	     ft_memcmp	     	ft_split	         ft_strmapi		   ft_substr	   \
		 ft_isalnum	     ft_memcpy	     	ft_strchr	       	 ft_strncmp		   ft_substr	   \
		 ft_isalpha	     ft_substr	     	ft_strdup	       	 ft_strnstr		   ft_isprint	   \
		 ft_isascii	     ft_memset	     	ft_striteri	         ft_strrchr		   ft_putendl_fd   \
		 ft_isdigit	     ft_putchar_fd	 	ft_strjoin	         ft_strtrim		   ft_strlcat	   \
		 ft_memmove	 	 ft_lstsize	 	 	ft_lstadd_front	   	 ft_lstnew	  	   ft_lstlast      \
		 ft_lstadd_back	 ft_lstcreate_back 	ft_lstcreate_front


SRC := $(FILES:=.c)

OBJ := $(SRC:.c=.o)

AR := ar -rc

RM := rm -rf

m := MakefileAutoPush


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

git :
	git add .
	git status
	git commit -m "$(m)"
	git push

.PHONY: all clean fclean re