/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:27:04 by marodrig          #+#    #+#             */
/*   Updated: 2024/02/15 17:56:25 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(char *str, char i, int p)
{
	int	c;

	c = 0;
	while (c < p)
	{
		if (str[c] == i)
			return (1);
		c++;
	}
	return (0);
}

int	main(int ac, char ** av)
{
	int	i;
	int	j;

	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					if (ft_check(av[1], av[1][i], i) == 0)
					{
						if (ft_check(av[2], av[1][i], j) == 0)
							write(1, &av[1][i], 1);
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}


