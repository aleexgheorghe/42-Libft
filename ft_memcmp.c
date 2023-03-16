/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:59:38 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/16 12:06:26 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	// Falla en 2 test, revisar en detalle
	size_t i;
	const unsigned char *s1;
	const unsigned char *s2;
	
	i = 0;
	s1 = str1;
	s2 = str2;
	
	while (n--)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i] || (n == 0))
				return (1);
			else
				return (-1);
		} else 
			i++;
	}
	return (0);
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	char c01[] = "Hola mund4";
// 	char c02[] = "Hola juli3";
// 
// 	printf("%d", ft_memcmp(c01, c02, 10));
// 	
// 	return(0);
// }