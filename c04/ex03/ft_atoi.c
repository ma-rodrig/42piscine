/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:03:27 by marodrig          #+#    #+#             */
/*   Updated: 2024/02/03 17:37:15 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	total;
	int	sinal;

	i = 0;
	total = 0;
	sinal = 1;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		{
			sinal *= (-1);
		}
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		total = total * 10 + (str[i] - 48);
		i++;
	}
	return (total * sinal);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = " ---+--+1234ab567";

	printf("%i\n", ft_atoi(str));
}
*/
