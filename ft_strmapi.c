/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:43:19 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/22 10:45:55 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

//char	fta_toupper(unsigned int i, char c)
//{
//	if (c >= 'a' && c <= 'z')
//		return (c - 'a' + 'A');
//	return (c);
//}
//
//int	main(void)
//{
//	char *str1 = "Hello, world!";
//	char *str2;
//
//	str2 = ft_strmapi(str1, &fta_toupper);
//	printf("Original string: %s\n", str1);
//	printf("Modified string: %s\n", str2);
//	free(str2);
//	return (0);
//}
