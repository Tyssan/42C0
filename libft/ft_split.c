/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:24:45 by tbrunier          #+#    #+#             */
/*   Updated: 2024/01/12 15:24:45 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memcpysplit(void *dest, const void *src, size_t n)
{
	int					i;
	unsigned char		*dest_p;
	const unsigned char	*src_p;

	i = -1;
	dest_p = dest;
	src_p = src;
	while (++i < (int)n)
		dest_p[i] = src_p[i];
	dest_p[i] = '\0';
	return (dest);
}

size_t	ft_count_words(char const *s, char c)
{
	size_t	n;
	size_t	i;

	if (!s)
		return (0);
	n = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			n++;
		i++;
	}
	return (n);
}

size_t	ft_strlen_sep(const char *s, char c)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

int	ft_splitloop(char const **s, char c, char ***tab, size_t wordnb)
{
	size_t	i;
	size_t	str_len;

	i = 0;
	while (*(*s) && wordnb != 0)
	{
		while (*(*s) == c && *(*s))
			(*s)++;
		if (!(*(*s)))
		{
			(*tab)[wordnb] = NULL;
			return (0);
		}
		str_len = ft_strlen_sep(*s, c);
		(*tab)[i] = malloc(sizeof(char) * (str_len + 1));
		if (!(*tab)[i])
		{
			while (i != 0)
				free ((*tab)[--i]);
			return (free (*tab), 0);
		}
		ft_memcpysplit((*tab)[i++], *s, str_len);
		*s = *s + str_len;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	wordnb;

	wordnb = ft_count_words(s, c);
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (wordnb + 1));
	if (!tab)
		return (NULL);
	if (!ft_splitloop(&s, c, &tab, wordnb))
		return (tab);
	tab[wordnb] = NULL;
	return (tab);
}

/*int	main(void)
{
	char	**res = ft_split("hello!", ' ');
	int		i = 0;

	if (res == NULL)
	{
		printf("error\n");
		return (0);
	}
	while (res[i] != NULL)
		printf("%s\n", res[i++]);
	return (0);
}*/
