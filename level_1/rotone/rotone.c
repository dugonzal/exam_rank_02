/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:39:04 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/11 14:25:59 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	rotone(char *str)
{
	while (*str)
	{
		if (*str == 'z' || *str == 'Z')
			*str -= 25;
		else if ((*str >= 'a' && *str <= 'y') || (*str >= 'A' && *str <= 'Y'))
			*str += 1;
		write (1, str++, 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
}
