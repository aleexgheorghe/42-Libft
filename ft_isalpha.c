/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:05:37 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/08 19:54:36 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// #include <unistd.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d ", ft_isalpha('a'));
// 	printf("%d ", ft_isalpha('z'));
// 	printf("%d ", ft_isalpha('A'));
// 	printf("%d ", ft_isalpha('Z'));
// 	printf("%d ", ft_isalpha('0'));
// 	printf("%d ", ft_isalpha('9'));
// 	printf("%d ", ft_isalpha(' '));
// 	printf("%d ", ft_isalpha('!'));
// 	printf("%d ", ft_isalpha('['));
// 	printf("%d ", ft_isalpha('`'));
// 	printf("%d ", ft_isalpha('{'));
// 	printf("%d ", ft_isalpha('~'));
// 	return (0);
// }
