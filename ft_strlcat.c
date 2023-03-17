/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:36:01 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/17 16:53:04 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dest_size == 0)
		return (ft_strlen(src));
	else
	{
		while (dest[i] != '\0' && i < dest_size)
			i++;
		while (src[j] != '\0' && i + j < dest_size - 1)
		{
			dest[i + j] = src[j];
			j++;
		}
		if (i != dest_size)
			dest[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}
