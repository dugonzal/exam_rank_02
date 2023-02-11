/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:38:49 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/29 21:41:42 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char byte;
	int i;

	i = 7;
	while (i >= 0)
	{
		byte = (byte * 2) + (octet % 2);
		octet /= 2;
		i--;
	}
	return (byte);
}
