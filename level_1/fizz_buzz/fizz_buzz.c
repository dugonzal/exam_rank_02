/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 00:31:03 by ciclo             #+#    #+#             */
/*   Updated: 2022/11/05 00:39:13 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#define bas10 "0123456789"

void ft_number(int n)
{
	if (n > 9)
		ft_number (n / 10);
	write (1, &bas10[n % 10], 1);
}

int	main(int ac, char **av)
{
	(void)av;
	(void)ac;
	int n;

	n = 0;
	while (++n < 101)
	{
		if ((n % 15) == 0)
			write (1, "fizzbuzz", 9);
		else if ((n % 3) == 0)
			write (1, "fizz", 5);
		else if ((n % 5) == 0)
			write (1, "buzz", 5);
		else
			ft_number(n);
		write (1, "\n", 1);
	}
	return (0);
}
