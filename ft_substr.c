/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:54:36 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/22 10:45:49 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*f;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	f = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	j = start;
	if (f == NULL)
		return (NULL);
	while (s[j] != '\0' && len--)
	{
		f[i] = s[j];
		i++;
		j++;
	}
	f[i] = '\0';
	return (f);
}

//int	main(void)
//{
//	char *c = "lorem ipsu";
//	unsigned int start = 0;
//	size_t len = 10;
//
//	printf("RETURNED: %s", ft_substr(c, start, len));
//
//	return (0);
//}
