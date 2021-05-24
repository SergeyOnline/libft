# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbroderi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/17 10:54:42 by sbroderi          #+#    #+#              #
#    Updated: 2020/02/17 10:54:45 by sbroderi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft

HEADER = libft.h

C_FILES = ft_strlen.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_tolower.c \
ft_toupper.c ft_isprint.c ft_isascii.c ft_isalnum.c ft_isdigit.c \
ft_isalpha.c ft_atoi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_memcmp.c ft_memchr.c \
ft_memmove.c ft_memccpy.c ft_memcpy.c ft_bzero.c ft_memset.c \
ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
ft_split.c ft_itoa.c ft_strmapi.c

O_FILES = $(C_FILES:%.c=%.o)

C_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

O_BONUS = $(C_BONUS:%.c=%.o)
FLAGS = -Wall -Werror -Wextra

.PHONY: all, clean, clean, re, bonus

%.o: %.c $(HEADER)
	gcc $(FLAGS) -c $< -o $@

all: $(NAME) 

$(NAME): $(O_FILES)
	
	ar rcs lib$(NAME).a $(O_FILES)

bonus: $(O_FILES) $(O_BONUS)
	ar rcs lib$(NAME).a $(O_FILES) $(O_BONUS)

clean:
	rm -f $(O_FILES) $(O_BONUS)

fclean: clean
	rm -f lib$(NAME).a

re: fclean all