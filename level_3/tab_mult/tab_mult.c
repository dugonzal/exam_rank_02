/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:28:42 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/28 15:34:58 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define nb "0123456789"


void nbr(int n)
{
	if (n > 9)
		nbr  (n / 10);
	write (1, &nb[n % 10], 1);
}

int ft_atoi(char *str)
{
	int nbr;

	nbr = 0;
	while (*str > 47 && *str < 58)
		nbr = nbr * 10 + *str++ - 48;
	return (nbr);
}

void tab_mult(int a)
{
	int i;

	i =  1;
	while (i < 10)
	{
		nbr (i);
		write (1, " x ", 3);
		nbr (a);
		write (1, " = ", 3);
		nbr (a * i);
		write (1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		tab_mult (ft_atoi (av[1]));
	else
		write (1, "\n", 1);
}
