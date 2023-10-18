/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:23:56 by tbrunier          #+#    #+#             */
/*   Updated: 2023/10/18 17:23:56 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1024);
	else
		return (0);
}

int	main(void)
{
	char	c;
	int		result;
	int		result2;

	c = 'i';
	result = -1;
	result2 = -1;
	result = ft_isalpha(c);
	result2 = isalpha(c);
	if (result != result2)
		printf("error, ft is %d, should be %d\n", result, result2);
	if (result == result2)
	{
		if (result == -1 && result2 == -1)
			printf("didnt changed, %d %d\n", result, result2);
		else
			printf("very gud, results are the same (%d)\n", result);
	}
	return (0);
}
