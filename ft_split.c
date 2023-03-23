/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:01:21 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/23 14:50:34 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int	words;

	words = 0;
	while (*s)
	{
		if (*s != c)
		{
			words++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (words);
}

static int	get_word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		words;

	words = count_words(s, c);
	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		arr[i] = (char *)malloc(sizeof(char) * (get_word_len(s, c) + 1));
		if (!arr[i])
			return (NULL);
		j = 0;
		while (*s && *s != c)
			arr[i][j++] = *s++;
		arr[i][j] = '\0';
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

//int	main(void)
//{
//	char *s = "Hola como estás, mi nombre es Alex";
//	char **str = ft_split(s, ' ');
//
//	if (str == NULL)
//	{
//		printf("Error: no se pudo asignar memoria.\n");
//		return (1);
//	}
//	for (int i = 0; str[i] != NULL; i++)
//		printf("%s\n", str[i]);
//	for (int i = 0; str[i] != NULL; i++)
//		free(str[i]);
//	free(str);
//	return (0);
//}
