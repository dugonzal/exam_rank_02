/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:09:32 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/13 15:15:30 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void str_capitalizer(char *str)
{
	int i;

	i = 1;
	if (str[0] >= 'a' && 'z' >= str[0])
		str[0] -= 32;
	write (1, &str[0], 1);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && 'z' >= str[i] && str[i - 1] == 32 || str[i - 1] == 9)
			str[i] -= 32;
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 1)
		write (1, "\n", 1);
	else
	{
		int i;

		i = 1;
		while (i < ac)
		{
		 	str_capitalizer (av[i]);
			write (1, "\n", 1);
			i++;
		}
	}

}
