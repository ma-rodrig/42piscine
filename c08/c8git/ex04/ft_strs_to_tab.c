/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:43:24 by marodrig          #+#    #+#             */
/*   Updated: 2024/02/13 18:08:38 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	return (i);
}

char	*ft_strcopy(char *av)
{
	int		i;
	char	*dest;

	i = 0;
	while (av[i])
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	i = 0;
	if (!dest)
		return (NULL);
	while (av[i])
	{
		dest[i] = av[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			i;

	stock = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stock)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock[i].str = av[i];
		stock[i].size = ft_strlen(av[i]);
		stock[i].copy = ft_strcopy(av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
