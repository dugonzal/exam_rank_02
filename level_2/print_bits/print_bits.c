/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:36:22 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/29 21:37:51 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	int mask;
	char byte;

	i = 7;
	mask = 1;
	while (i >= 0)
	{
		byte = (((octet >> i) & mask) + 48);
		write (1, &byte, 1);
		i--;
	}
}
