/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:53:25 by tbrunier          #+#    #+#             */
/*   Updated: 2023/10/18 17:53:25 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(char c)
{
	if ((c < 48 || c > 57))
		return (0);
	else
		return (2048);
}

int	main(void)
{
	char	c;
	int		result;
	int		result2;

	c = '!';
	result = -1;
	result2 = -1;
	result = ft_isdigit(c);
	result2 = isdigit(c);
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
