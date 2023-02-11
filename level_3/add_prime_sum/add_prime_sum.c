/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:53:44 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/11 15:00:47 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	nbr(int n)
{
	char c;

	if (n > 9)
		nbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	prime(int n)
{
	int i;

	i = 2;
	if (n <= 1)
		return (0);
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int nbr;

	nbr = 0;
	while (*str >= '0' && *str <= '9')
		nbr = nbr * 10 + *str++ - '0';
	return (nbr);
}
void	add_prime_sum(int n)
{
	int i;
	int sum;

	i = 2;
	sum = 0;
	while (i <= n)
	{
		if (prime(i))
			sum += i;
		i++;
	}
	nbr(sum);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		add_prime_sum(ft_atoi(argv[1]));
	else
		write (1, "0", 1);
	write(1, "\n", 1);
}
