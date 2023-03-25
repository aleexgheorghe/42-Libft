/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:26:02 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/25 16:29:41 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

//int	main(void)
//{
//	t_list	*new;
//	t_list	*new2;
//	t_list	*new3;
//
//	new = ft_lstnew("Hello");
//	new2 = ft_lstnew("World");
//	new3 = ft_lstnew("!");
//	ft_lstadd_front(&new, new2);
//	ft_lstadd_front(&new, new3);
//	printf("%s", ft_lstlast(new)->content);
//	return (0);
//}
