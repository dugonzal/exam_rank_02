/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:21:43 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/29 21:24:20 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *s, char a, int counter)
{
	int i;

	i = 0;
	while (i < counter)
	{
		if (s[i] == a)
			return (0);
		i++;
	}
	return (1);
}

void	inter(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				if (check (s1, s2[j], i))
				{
					write (1, &s1[i], 1);
					break ;
				}
			}
			j++;
		}
		i++;
	}
}


int	main(int ac, char **av)
{
	if (ac == 3)
		inter (av[1], av[2]);
	write (1, "\n", 1);
}
