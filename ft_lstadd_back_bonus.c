/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:31:21 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/25 16:34:41 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
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
//	printf("%s", ft_lstlast(new)->content);
//	return (0);
//}
