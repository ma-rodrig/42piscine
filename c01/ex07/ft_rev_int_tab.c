/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 10:27:47 by marodrig          #+#    #+#             */
/*   Updated: 2024/01/28 16:02:20 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	temp;

	i = 0;
	a = size - 1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[a];
		tab[a] = temp;
		i++;
		--a;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int	tab[] = {2, 1, -5, 3};
	int	size = 4;
	int	i;

	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%i", tab[i]);
		i++;
	}
}
*/
