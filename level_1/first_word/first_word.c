/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:49:32 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/11 14:15:55 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	first_word(char *str)
{
	while (*str == ' ' || *str == '\t')
			str++;
	while (*str != ' ' && *str != 0 && *str != '\t')
			write (1, str++, 1);
}

int	main(int ac, char **av)
{
	//printf ("\nentra %s\n", av[1]);
	if (ac == 2)
		first_word(av[1]);
	write (1, "\n", 1);
}
