/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:20:10 by tbrunier          #+#    #+#             */
/*   Updated: 2024/01/08 13:55:56 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*p1;

	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= slen || len == 0)
		return (ft_strdup(""));
	if (start + len > slen)
		len = slen - start;
	p1 = (char *)malloc(sizeof(char) * (len + 1));
	if (!p1)
		return (NULL);
	ft_strlcpy(p1, s + start, len + 1);
	return (p1);
}
