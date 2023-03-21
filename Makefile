# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acalin-b <acalin-b@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/12 15:26:57 by acalin-b          #+#    #+#              #
#    Updated: 2023/03/19 15:53:23 by acalin-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CFLAG	= -Wall -Werror -Wextra -I.
FILES		= ft_atoi.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_strlcpy.c \
				ft_isalnum.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcat.c \
				ft_strncmp.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_memcmp.c \
				ft_memchr.c \
				ft_strnstr.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_itoa.c

OBJS	= $(FILES:%.c=%.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJ): $(FILES)
	gcc $(CFLAG) $(FILES)

all: $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY : clean, fclean, re