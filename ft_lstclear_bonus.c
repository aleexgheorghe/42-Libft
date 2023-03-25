/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:51:44 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/25 17:08:05 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

//int	main(void)
//{
//	t_list	*new;
//	t_list	*new2;
//
//	new = ft_lstnew("Hello");
//	new2 = ft_lstnew("World");
//	printf("%s", new->content);
//	printf("%s", new2->content);
//	ft_lstclear(&new, free);
//	return (0);
//}
//
