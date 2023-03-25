/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:36:06 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/25 17:38:29 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
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
