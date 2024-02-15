/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interval_space.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:46:51 by marodrig          #+#    #+#             */
/*   Updated: 2024/02/11 16:21:34 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (argc >= 2)
	{
		while (j < argc)
		{
			
			while (argv[j][i])
			{
				write(1, &argv[j][i], 1);
				i++;
				if (argv[j][i])
					write(1, "   ", 3);
			}
			write(1, "\n", 1);
			j++;
			i = 0;
		}
	}
	else
		write(1, "\n", 1);
}
