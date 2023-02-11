/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 20:52:03 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/29 20:54:30 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha_mirror(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = 'a' - *str + 'z';
		else if (*str >= 'A' && *str <= 'Z')
			*str = 'A' - *str + 'Z';
		write (1, str++, 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror (av[1]);
	write (1, "\n", 1);
}
