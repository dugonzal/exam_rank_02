/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 21:40:16 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/11 15:23:27 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check(char *s, char a, int counter)
{
	int i;

	i = 0;
	while (i < counter)
	{
		if (s[i] == a)
			return (1);
		printf ("[%c]", s[i]);
		i++;
	}
	return (0);
}

void	hidenp(char *s1, char *s2)
{
	while (*s2)
	{
		if (*s1 == *s2)
			s1++;
		s2++;
	}
	if (*s1 == '\0')
		write (1, "1", 1);
	else
		write (1, "0", 1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		hidenp (av[1], av[2]);
	write (1, "\n", 1);
}
