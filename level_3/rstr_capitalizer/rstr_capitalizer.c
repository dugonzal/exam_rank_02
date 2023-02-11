/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:28:03 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/14 12:40:37 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && 'z' >= str[i] && (str[i + 1] == 32 || str[i + 1] == 9 || str[i + 1] == 0))
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
			rstr_capitalizer (av[i]);
			write (1, "\n", 1);
			i++;
		}
	}
}
