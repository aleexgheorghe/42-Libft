/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:01:21 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/22 17:05:05 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// Analizamos la frase "Hola como estás, mi nombre es Alex"
// La separación se realiza con " " (espaicos)
// El resultadao debe ser un array de strings:
// "Hola", "como", "estás,", "mi", "nombre", "es", "Alex"

// 1. Contar el número de palabras
// 2. Crear un array de strings con el número de palabras
// 3. Reservar memoria para cada string
// 4. Copiar cada palabra en su string correspondiente
// 5. Devolver el array de strings
// 6. Liberar la memoria

int	ft_count_word(char const *s, char c)
{
	int w;
	int i;

	w = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			w++;
		i++;
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	str = (char **)malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			str[j] = (char *)malloc(sizeof(char) * (i - k + 1));
			if (str[j] == NULL)
				return (NULL);
			j++;
			k = i + 1;
		}
		i++;
	}
	str[j] = (char *)malloc(sizeof(char) * (i - k + 1));
	if (str[j] == NULL)
		return (NULL);
	return (str);
}

int	main(void)
{
	char const	*s;
	char		c;

	s = "lorem ipsum dolor sit amet";
	c = ' ';
	printf("R ETURNED: %s", ft_split(s, c));
	return (0);
}
