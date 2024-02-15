/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:09:55 by marodrig          #+#    #+#             */
/*   Updated: 2024/02/03 13:39:00 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0) || (power == 0))
		return (1);
	if (power >= 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int nb = 4;
	int power = 4;

	printf("%i\n", ft_recursive_power(nb, power));
}
*/
