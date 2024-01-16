/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 01:11:27 by tbrunier          #+#    #+#             */
/*   Updated: 2024/01/08 13:52:23 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int					i;
	unsigned char		*dest_p;
	const unsigned char	*src_p;

	if (!dest && !src)
		return (0);
	i = -1;
	dest_p = dest;
	src_p = src;
	if (dest > src)
	{
		i = (int)n;
		while (--i >= 0)
			dest_p[i] = src_p[i];
	}
	else
		while (++i < (int)n)
			dest_p[i] = src_p[i];
	return (dest);
}
