/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:15:14 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/11 14:21:11 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	repeat_alpha(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			int p = 0;
			while (p++ < *str - 96)
				write (1, str, 1);
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			int p = 0;
			while (p++ < *str - 64)
				write (1, str, 1);
		}
		else
			write (1, str, 1);
		str++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		repeat_alpha(av[1]);
	write (1, "\n", 1);
	return (0);
}
