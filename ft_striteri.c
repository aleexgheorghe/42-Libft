/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:19:36 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/22 12:49:42 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

//char	fta_toupper(unsigned int i, char c)
//{
//	if (c >= 'a' && c <= 'z')
//		return (c - 32);
//	return (c);
//}
//
//int	main(void)
//{
//	char *str1 = "Hello, world!";
//	char *str2;
//
//	str2 = ft_strmapi(str1, &fta_toupper);
//	return (0);
//}
