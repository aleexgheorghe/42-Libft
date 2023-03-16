# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acalin-b <acalin-b@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/12 15:26:57 by acalin-b          #+#    #+#              #
#    Updated: 2023/03/16 12:15:36 by acalin-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Nombre del programa
NAME	= libft.a
#Flags de compilación > I (dir)
CFLAG	= -Wall -Werror -Wextra -I.
# Archivos
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
				ft_memcmp.c \
				ft_strncmp.c

# Todos los archivos .c los migramos 
OBJS	= $(FILES:%.c=%.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

# Regla para construir objetos
$(OBJ): $(FILES)
	gcc $(CFLAG) $(FILES)

# Regla por defecto, la que se llama si se ejecuta 'make' sin argumentos
all: $(NAME)

# Reglas de una receta, no deben ser el mismo nombre de un archivo
clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

# Reiniciar el proceso de compilación
re: fclean all

# Indicamos que un regla y no un archivo, para evitar confusiones
.PHONY : clean, fclean, re