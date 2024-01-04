/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 00:32:15 by tbrunier          #+#    #+#             */
/*   Updated: 2024/01/04 00:32:15 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_p;
	const unsigned char	*src_p;

	i = 0;
	dest_p = dest;
	src_p = src;
	while (i < n)
	{
		dest_p[i] = src_p[i];
		i++;
	}
	return (dest);
}
