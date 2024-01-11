/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:33:01 by tbrunier          #+#    #+#             */
/*   Updated: 2024/01/11 20:17:39 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*newnode;

	if (!lst)
		return (NULL);
	res = NULL;
	while (lst != NULL)
	{
		if (f != NULL)
			newnode = ft_lstnew(f(lst->content));
		else
			newnode = ft_lstnew(lst->content);
		if (!newnode)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, newnode);
		lst = lst->next;
	}
	return (res);
}
