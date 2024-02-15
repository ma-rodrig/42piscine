/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:49:59 by marodrig          #+#    #+#             */
/*   Updated: 2024/01/27 10:45:42 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = (div / mod);
	*b = (div % mod);
}
/*
int	main(void)
{
	int	c = 2;
	int	d = 2;
	int	*p = &c;
	int	*t = &d;

	ft_ultimate_div_mod(p, t);
	printf("%i\n%i", c, d);
}	
*/
