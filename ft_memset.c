/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:22:01 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/13 13:16:24 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;
	unsigned int	i;

	p = (unsigned char *)str;
	i = 0;
	while (n-- > 0)
		p[i++] = (unsigned char)c;
	return (str);
}

//#include <stdio.h>
//#include <string.h>
//#include <unistd.h>
//int main()
//{
//	char str[50];
//	char txt[50];
//
//	strcpy(txt, "mem's adress was not returned\n");
//	//strcpy(str,"This is string.h library function");
//   //puts(str);
//
//   //printf("%s", memset(str,'$',7));
//   printf("%s", ft_memset(txt,'c',5));
//   //puts(str);
//   
//   return(0);
//}