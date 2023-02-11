/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 20:59:44 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/29 21:02:52 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	do_op(int a, char b, int c)
{
	if (b == '+')
		printf ("%d", a + c);
	else if (b == '-')
		printf ("%d", a - c);
	else if (b == '*')
		printf ("%d", a * c);
	else if (b == '/')
		printf ("%d", a / c);
	else if (b == '%')
		printf ("%d", a % c);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op (atoi (av[1]), av[2][0], atoi (av[3]));
	printf ("\n");
}
