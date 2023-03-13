/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:25:34 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/13 14:08:30 by acalin-b         ###   ########.fr       */
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

//#include <stdio.h>
//#include <string.h>
//int main(void) {
//   const char src[50] = "hola";
//   char dest[50];
//   strcpy(dest,"Heloooo!!");
//   //printf("Before memcpy dest = %s\n", dest);
//   //memcpy(dest, src, strlen(src)+1);
//   //printf("After memcpy dest = %s\n", dest);
//   //printf("..............................");
//   printf("%s", ft_memcpy(dest, src, strlen(src)+1));
//   
//   
//   return(0);
//}