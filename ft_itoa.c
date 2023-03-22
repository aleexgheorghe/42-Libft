/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:33:30 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/22 10:46:37 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_intlen(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*hardcodrd(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

char	*ft_itoa(int n)
{
	int		neg;
	char	*str;
	int		len;

	neg = 0;
	if (n == 0 || n == -2147483648)
		return (hardcodrd(n));
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	len = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * (len + neg + 1));
	if (!str)
		return (NULL);
	str[len + neg] = '\0';
	while (len--)
	{
		str[len + neg] = (n % 10) + '0';
		n /= 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}

//int	main(void)
//{
//	char *str = ft_itoa(-9874);
//	printf("RESULT: %s ", str);
//	free(str);
//	return (0);
//}
