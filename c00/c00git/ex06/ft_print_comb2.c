/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:30:36 by marodrig          #+#    #+#             */
/*   Updated: 2024/01/27 14:19:13 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	n += 48;
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	t;

	i = 0;
	while (i <= 98)
	{
		t = i + 1;
		while (t <= 99)
		{
			ft_putchar(i / 10);
			ft_putchar(i % 10);
			write(1, " ", 1);
			ft_putchar(t / 10);
			ft_putchar(t % 10);
			if (i != 98 || t != 99)
			{
				write(1, ", ", 2);
			}
			t++;
		}
		i++;
	}
}
