/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:55:53 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/11 14:21:46 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void rev_print(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	while (i--)
		write (1, &str[i], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_print(av[1]);
	write (1, "\n", 1);
	return (0);
}
