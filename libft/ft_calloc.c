/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 10:29:38 by tbrunier          #+#    #+#             */
/*   Updated: 2024/01/05 10:29:38 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	totalsize;
	void	*ptr;

	totalsize = nmemb * size;
	if (totalsize < nmemb && totalsize < size)
		return (NULL);
	ptr = malloc(totalsize);
	if (ptr != NULL)
		ft_bzero(ptr, totalsize);
	return (ptr);
}
