/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 20:20:25 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/11 14:28:23 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_and_replace(char *str, char a, char b)
{
	while (*str)
	{
		if (*str == a)
			*str = b;
		write (1, str++, 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 4 && av[2][1] == 0 && av[3][1] == 0)
		search_and_replace(av[1], av[2][0], av[3][0]);
	write (1, "\n", 1);
}
