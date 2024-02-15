/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:57:19 by marodrig          #+#    #+#             */
/*   Updated: 2024/02/12 12:37:13 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	c;

	c = 0;
	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		range[c] = min;
		min++;
		c++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int min = 65;
	int max = 100;
	int i = 0;
	
	while (i < (max - min))
	{
		printf("%i\n", ft_range(min, max)[i]);
		i++;
	}
}
*/
