/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_53multi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:44:34 by marodrig          #+#    #+#             */
/*   Updated: 2024/02/07 12:38:58 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_53multi(char *str)
{
	int	i;

	i = 1;
	write(1, &str[0], 1);
	while (str[i])
	{
		/*if (str[i] == 32)
			write(1, &str[i], 1);*/
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			write(1, "5", 1);
		}
		else if (i % 3 == 0)
		{
			write(1, "5", 1);
		}
		else if (i % 5 == 0)
		{
			write(1, "3", 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char str[] = "abcdef";
	//char str1[] = "welcome to 42 school";

	ft_53multi(str);
	//ft_53multi(str1);
}
