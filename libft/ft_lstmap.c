/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:33:01 by tbrunier          #+#    #+#             */
/*   Updated: 2024/01/15 09:31:47 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*newnode;
	void	*temp;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	while (lst != NULL)
	{
		temp = f(lst->content);
		if (!temp)
			return (ft_lstclear(&res, del), NULL);
		newnode = ft_lstnew(temp);
		if (!newnode)
		{
			del(temp);
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, newnode);
		lst = lst->next;
	}
	return (res);
}
