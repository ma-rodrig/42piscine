/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:33:51 by marodrig          #+#    #+#             */
/*   Updated: 2024/01/30 10:31:37 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	special_char(char c)
{
	if ((lowercase(c) == 1) || (uppercase(c) == 1))
	{
		return (0);
	}
	if (c >= '0' && c <= '9')
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (lowercase(str[0]) == 1)
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if ((lowercase(str[i]) == 1) && (special_char(str[i - 1]) == 1))
		{
			str[i] -= 32;
		}
		if ((uppercase(str[i]) == 1) && (special_char(str[i - 1]) == 0))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("%s\n", ft_strcapitalize(str));
}
*/
