/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:14:18 by tbrunier          #+#    #+#             */
/*   Updated: 2024/01/09 18:53:51 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numlen(int n)
{
	size_t	i;
	int		tmp;

	i = 0;
	tmp = n;
	if (n <= 0)
	{
		tmp = -tmp;
		i++;
	}
	while (tmp != 0)
	{
		tmp = tmp / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_numlen(n);
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[i--] = '\0';
	if (n == 0)
		str[i] = '0';
	while (n > 0)
	{
		str[i--] = (n % 10) + '0';
		n = (n / 10);
	}
	return (str);
}
