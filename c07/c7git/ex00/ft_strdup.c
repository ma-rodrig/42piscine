/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:19:38 by marodrig          #+#    #+#             */
/*   Updated: 2024/02/12 12:34:56 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*str_cpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(str_len(src));
	if (!(dest))
		return (NULL);
	return (str_cpy(dest, src));
}
/*
#include <stdio.h>

int	main(void)
{
	char src[] = "string";

	printf("%s\n", ft_strdup(src));
}
*/
