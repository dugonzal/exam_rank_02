/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:45:09 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/29 21:50:01 by ciclo            ###   ########.fr       */
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

void	ft_union(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
	{
		if (check (s1, s1[i], i))
			write (1, &s1[i], 1);
		i++;
	}
	j = 0;
	while (s2[j])
	{
		if (check (s1, s2[j], j) && check (s2, s2[j], j))
			write (1, &s2[j], 1);
		j++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union (av[1], av[2]);
	write (1, "\n", 1);
}
