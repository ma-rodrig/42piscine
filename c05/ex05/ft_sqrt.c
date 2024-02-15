/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:56:21 by marodrig          #+#    #+#             */
/*   Updated: 2024/02/04 14:19:18 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	while ((sqrt * sqrt) <= nb)
	{
		if (sqrt == 46341)
			return (0);
		if ((sqrt * sqrt) == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int nb = 2147483646;

	printf("%i\n", ft_sqrt(nb));
}
*/
