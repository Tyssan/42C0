/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 19:50:36 by tbrunier          #+#    #+#             */
/*   Updated: 2024/01/08 13:54:06 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p1;

	p1 = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (n-- > 0)
	{
		if (*p1 == (unsigned char)c)
			return ((void *)p1);
		p1++;
	}
	return (NULL);
}
