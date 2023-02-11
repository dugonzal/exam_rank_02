/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:51:05 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/29 21:54:31 by ciclo            ###   ########.fr       */
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

void	wdmatch(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s2[i])
	{
		if (s2[i] == s1[j])
			j++;
		i++;
	}
	if (ft_strlen (s1) == j)
		while (*s1)
			write (1, s1++, 1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write (1, "\n", 1);
}
