/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:52:21 by tbrunier          #+#    #+#             */
/*   Updated: 2024/01/08 20:04:53 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return ((char *)s1);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	len = ft_strlen(s1);
	if (len == 0)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[len - 1]))
		len--;
	return (ft_substr(s1, 0, len));
}
