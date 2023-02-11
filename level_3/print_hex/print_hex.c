/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 20:47:40 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/29 20:49:43 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define hex16 "0123456789abcdef"

void	hex(int n)
{
	if (n > 15)
		hex (n / 16);
	write (1, &hex16[n % 16], 1);
}

int	ft_atoi(char *str)
{
	int nbr = 0;
	while (*str > 47 && *str < 58)
		nbr = nbr *  10 + *str++ - 48;
	return (nbr);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		hex (ft_atoi (av[1]));
	write (1, "\n", 1);
}
