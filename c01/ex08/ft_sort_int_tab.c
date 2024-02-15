/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:00:58 by marodrig          #+#    #+#             */
/*   Updated: 2024/01/29 10:05:38 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	s;

	i = 0;
	while (i < size)
	{
		s = i + 1;
		while (s < size)
		{
			if (tab[s] < tab[i])
			{
				temp = tab[s];
				tab[s] = tab[i];
				tab[i] = temp;
			}
			s++;
		}
		i++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	array[] = {2, 1, -1, 4, 5};
	int	size = 5;
	int	p;

	p = 0;
	while (p < size)
	{
		ft_sort_int_tab(array, size);
		printf("%i", array[p]);
		p++;
	}
}
*/
