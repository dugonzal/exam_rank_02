/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:14:33 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/11 15:15:10 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



void	expand_str(char *str)
{
	while (*str == 9 || *str == 32)
		str += 1;
	while (*str)
	{
		if (*str == 9 || *str == 32)
		{
			if (*(str + 1) != 0 && *(str + 1) != 9 && *(str + 1) != 32) //--> *(str + 1) <- de esta manera puedo llamar a la siguiente posicion de memoria
				write (1, "   ", 3);
		}
		if (*str != 0 && *str != 9 && *str != 32)
			write (1, str, 1);
		str += 1;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		expand_str (av[1]);
	write (1, "\n", 1);
}
