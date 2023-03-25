/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:35:46 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/25 16:49:41 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

//#include <stdio.h>
//
//int	main(void)
//{
//	t_list	*new;
//	t_list	*new2;
//
//	new = ft_lstnew("Hello");
//	new2 = ft_lstnew("World");
//
//	printf("%s", new->content);
//	printf("%s", new2->content);
//
//	ft_lstdelone(new, free);
//	ft_lstdelone(new2, free);
//
//	printf("%s", new->content);
//	printf("%s", new2->content);
//	return (0);
//}
