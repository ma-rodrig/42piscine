/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:02:46 by marodrig          #+#    #+#             */
/*   Updated: 2024/02/03 11:23:52 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	while (nb > 2)
	{
		res *= (nb - 1);
		--nb;
	}
	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int nb = 5;

	printf("%i\n", ft_iterative_factorial(nb));
}
*/
