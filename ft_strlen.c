/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:47:22 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/08 19:54:40 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i ++;
	return (i);
}

// #include <unistd.h>

// int	main(void)
// {
// 	char	*str;

// 	str = "Hello World!";
// 	printf("%d", ft_strlen(str));
// 	return (0);
// }