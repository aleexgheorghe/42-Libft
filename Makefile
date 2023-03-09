# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acalin-b <acalin-b@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 15:08:42 by acalin-b          #+#    #+#              #
#    Updated: 2023/03/09 15:36:05 by acalin-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra -I. -c
FILES		= ft_atoi.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_isalnum.c
OBJ			= $(FILES:%.c=%.o)

all: $(NAME)

# Esto es para que no se ejecute si los archivos fuente no existen o no se han modificado
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	echo "Compilando libft"

$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)
	echo "Compilando libft"

# Clean hace que borre los archivos .o
clean:
	rm -f $(OBJ)

# Fclean hace que borre los archivos .o y el .as
fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY: clean fclean all re