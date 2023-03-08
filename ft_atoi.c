/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:57:15 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/08 20:38:51 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		result;
	int		i;
	int		s;

	result = 0;
	i = 0;
	s = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == ' '
		|| str[i] == ' ' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i ++;

	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = -1;
		i ++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i ++;
	}
	return (result * s);
}
// #include <unistd.h>
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	// Test of aoi
// 	printf("%d ", ft_atoi("--123abc"));
// 	printf("%d ", atoi("--123abc"));
// 	return (0);
// }
