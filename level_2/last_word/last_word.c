/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:27:10 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/29 21:32:04 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (str[i] != 0 && (str[i] == 32 || str[i] == 9))
		i--;
	while (str[i] != 0 && str[i] != 9 && str[i] != 32)
		i--;
	i++;
	while (str[i] != 0 && str[i] != 9 && str[i] != 32)
		write (1, &str[i++], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		last_word (av[1]);
	write (1, "\n", 1);
}
