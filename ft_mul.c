/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mul.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:22:30 by marodrig          #+#    #+#             */
/*   Updated: 2024/02/11 16:50:09 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_mul(int *ptr, int nbr)
{
	int	res;
	int temp;

	temp = *ptr;
	
	
	res = (temp * nbr);
	*ptr = res;
}


#include <stdio.h>

int	main()
{
	int ptr = 3;
	int nbr = 5;
	return (ft_mul(&ptr, nbr)); 
}
