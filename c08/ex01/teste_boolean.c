/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_boolean.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:53:36 by marodrig          #+#    #+#             */
/*   Updated: 2024/02/13 14:55:11 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"

void ft_putstr(char *str)
{
while (*str)
write(1, str++, 1);
}
t_bool ft_is_even(int nbr)
{
return ((EVEN(nbr)) ? TRUE : FALSE);
}
int main(int argc, char **argv)
{
(void)argv;
if (ft_is_even(argc - 1) == TRUE)
ft_putstr(EVEN_MSG);
else
ft_putstr(ODD_MSG);
return (SUCCESS);
}
