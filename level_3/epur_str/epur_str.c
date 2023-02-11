/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 10:15:08 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/29 10:18:11 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	epur_str(char *str)
{
	int i;

	i = 0;
	while (str[i] == 9 || str[i] == 32)
		i++;
	while (str[i])
	{
		if (str[i] == 32 || str[i] == 9)
		{
			if (str[i + 1] != 0 && str[i+ 1] != 9 && str[i + 1] != 32)
				write (1, " ", 1);
		}
		if (str[i] != 0 && str[i] != 9 && str[i] != 32)
			write (1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		epur_str (av[1]);
	write (1, "\n", 1);
}
