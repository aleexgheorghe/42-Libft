/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 12:04:10 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/22 10:46:45 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*elements;

	elements = malloc(n * size);
	if (elements == NULL)
		return (NULL);
	ft_bzero(elements, n * size);
	return (elements);
}
