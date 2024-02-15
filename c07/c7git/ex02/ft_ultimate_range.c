/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:22:13 by marodrig          #+#    #+#             */
/*   Updated: 2024/02/12 12:40:21 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	c;
	int	*res;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	c = max - min;
	res = malloc(sizeof(int) * (c));
	if (res == NULL)
		return (-1);
	c = 0;
	while (min < max)
	{
		res[c] = min;
		min++;
		c++;
	}
	*range = res;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	int min = 10;
	int max = 21;
	int *range;

	printf("%i\n", ft_ultimate_range(&range, min, max));
}
*/
