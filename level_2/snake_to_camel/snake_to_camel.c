/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:42:20 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/29 21:44:15 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	snake_to_camel(char *str)
{
	while (*str)
	{
		if (*str == '_')
		{
			str++;
			*str -= 32;
		}
		write (1, str++, 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		snake_to_camel (av[1]);
	write (1, "\n", 1);
}
