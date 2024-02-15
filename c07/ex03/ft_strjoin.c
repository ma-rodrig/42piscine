/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:46:52 by marodrig          #+#    #+#             */
/*   Updated: 2024/02/12 14:25:59 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char **str, int size)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			j++;
			c++;
		}
		i++;
	}
	return (c);
}

int	sep_len(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

char	*ft_join(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;
	int		len;

	len = ((sep_len(sep) * (size - 1)) + str_len(strs, size) + 1);
	s = malloc(sizeof(char) * len);
	if (!s)
		return (0);
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			s[c++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != (size - 1))
			s[c++] = sep[j++];
		i++;
	}
	s[c] = '\0';
	return (s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;

	if (size == 0)
		s = malloc(sizeof(char));
	else
		s = ft_join(size, strs, sep);
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char *strs[4];
	strs[0] = "welcome";
	strs[1] = "to";
	strs[2] = "42";
	strs[3] = "school";

	printf("%s\n", ft_strjoin(4, strs, " | "));
}
*/
