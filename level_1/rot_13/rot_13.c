/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:09:01 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/11 14:24:16 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void rot_13(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'm' || *str >= 'A' && *str <= 'M')
			*str += 13;
		else if (*str >= 'n' && *str <= 'z' || *str >= 'N' && *str <= 'Z')
			*str -= 13;
		write (1, str++, 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rot_13(av[1]);
	write (1, "\n", 1);
	return (0);
}
