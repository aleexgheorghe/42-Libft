/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 12:04:10 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/18 14:31:44 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*elements;

	elements = malloc(n * size);
	if (elements == NULL)
		return (NULL);
	ft_bzero(elements, n * size);
	return (elements);
}

//int	main(void)
// 	// Test ft_calloc: Probamos con 10 caracteres de tamaño char
//	char *str = ft_calloc(10, sizeof(char));
//	printf("%s", str);
//	return (0);
//}