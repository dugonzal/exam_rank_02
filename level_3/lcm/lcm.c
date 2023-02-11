/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 22:04:18 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/29 22:12:24 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int c;

	if (a <= 0 || b <= 0)
		return (0);

	if (a > b)
		c = a;
	else
		c = b;
	while (1)
	{
		if ((c % a) == 0 && (c % b) == 0)
			return (c);
		c++;
	}
//	return (0);
}
