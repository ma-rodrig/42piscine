/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:59:25 by marodrig          #+#    #+#             */
/*   Updated: 2024/02/09 11:10:44 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int	i;

	i = (str_len(str) - 1);
	while (str[i])
	{
		write (1, &str[i], 1);
		--i;
	}
	write(1, "\n", 1);
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "STRRRrrrrskrttt";

	ft_rev_print(str);
	return (0);
}
