/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriga <abarriga@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:26:39 by abarriga          #+#    #+#             */
/*   Updated: 2022/09/30 17:58:26 by abarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*a;
	t_list	*node1;

	if (!lst || !f)
		return (0);
	node1 = 0;
	while (lst)
	{
		a = ft_lstnew(f(lst->content));
		if (!a)
		{
			ft_lstclear(&node1, del);
			return (0);
		}
		ft_lstadd_back(&node1, a);
		lst = lst->next;
	}
	return (node1);
}
