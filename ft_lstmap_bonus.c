/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:39:16 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/25 17:41:48 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (NULL);
	tmp = new;
	lst = lst->next;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&tmp, del);
			return (NULL);
		}
		ft_lstadd_back(&tmp, new);
		lst = lst->next;
	}
	return (tmp);
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
//	ft_lstadd_back(&new, new2);
//	ft_lstadd_back(&new, new3);
//	ft_lstiter(new, &ft_lstclear);
//	return (0);
//}
