/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:54:36 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/18 16:26:34 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*f;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	f = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	j = start;
	if (f == NULL)
		return (NULL);
	while (s[j] != '\0' && len--)
	{
		f[i] = s[j];
		i ++;
		j ++;
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