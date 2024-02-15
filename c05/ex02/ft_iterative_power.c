/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:48:39 by marodrig          #+#    #+#             */
/*   Updated: 2024/02/04 11:27:48 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power--)
	{
		res *= nb;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int nb = 4;
	int power = 0;

	printf("%i\n", ft_iterative_power(nb, power));
}
*/
