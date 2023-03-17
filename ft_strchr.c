/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:34:21 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/17 10:54:17 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}

// Test
// char teste int c 't'
// char teste int c 'e'
// char teste int c '\0'
// char teste int c 'a'
// char teste int c 'e' + 256
// char teste int c 1024

//int	main()
//{
//	char *str = "teste";
//	int c = 'e' + 256;
//	
//	printf("FAKE: %s\n", ft_strchr(str, c));
//	printf("ORIGINAL: %s\n", strchr(str, c));
//	return (0);
//}