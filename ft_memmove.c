/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:02:12 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/13 17:21:37 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*p_src;
	char	*p_dest;
	int		i;

	i = 0;
	p_src = (char *)src;
	p_dest = (char *)dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (p_src < p_dest)
		while (n--)
			p_dest[n] = p_src[n];
	else
	{
		while (i < n)
		{
			p_dest[i] = p_src[i];
			i++;
		}
	}
	return (p_dest);
}

// #include <stdio.h>
// #include <string.h>
// 
// int main()
// {
// 	char str1[] = "Geeks"; // Array of size 100
// 	char str2[] = "123456"; // Array of size 5
// 
// 	printf("%s", memmove(str1, str2, 4));
// 	
// //    char str1[] = "Geeks"; // Array of size 100
// //    char str2[] = "Quiz"; // Array of size 5
// //  
// //    puts("str1 before memmove ");
// //    puts(str1);
// //  
// //    /* Copies contents of str2 to sr1 */
// //    memmove(str1, str2, sizeof(str2));
// //  
// //    puts("\nstr1 after memmove ");
// //    puts(str1);
// //  
// 	return 0;
// }