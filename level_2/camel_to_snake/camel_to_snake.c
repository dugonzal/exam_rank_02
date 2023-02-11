/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 20:56:31 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/29 20:58:01 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	camel_to_snake(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
			write (1, "_", 1);
		}
		write (1, str++, 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		camel_to_snake (av[1]);
	write (1, "\n", 1);
}
