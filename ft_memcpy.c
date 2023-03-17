/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:25:34 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/17 16:53:11 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*p_src;
	char	*p_dest;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	p_src = (char *)src;
	p_dest = (char *)dest;
	while (i < n)
	{
		((char *)p_dest)[i] = ((char *)p_src)[i];
		i++;
	}
	return (p_dest);
}
