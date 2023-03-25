/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:08:05 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/25 16:15:47 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

//#include <stdio.h>
//
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
//	printf("%s", new->content);
//	return (0);
//}
//
