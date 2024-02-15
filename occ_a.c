/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   occ_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:54:05 by marodrig          #+#    #+#             */
/*   Updated: 2024/02/11 16:59:13 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	occ_a(char *str)
{
	int 	c;
	int	i;

	i = 0;
	c = 0;
	while (str[i])
	{
		if (str[i] == 'A')
		{
			c++;
		}
		i++;
	}
	return (c);
}
#include <stdio.h>

int	main()
{
	char *str = "gdhsjAAjajcnb";
	printf("%d\n", occ_a(str));
}
