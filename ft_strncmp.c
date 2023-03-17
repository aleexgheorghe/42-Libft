/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:15:23 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/17 16:49:58 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	const unsigned char	*s1;
	const unsigned char	*s2;

	s1 = str1;
	s2 = str2;
	while (num-- && (*s1 || *s2))
	{
		if (*s1 != *s2 && *s1 > *s2)
			return (1);
		else if (*s1 != *s2 && *s1 < *s2)
			return (-1);
		else if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
	}
	return (0);
}
