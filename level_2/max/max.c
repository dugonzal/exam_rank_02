/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:34:19 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/29 21:35:34 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int tmp;
	if (!tab || len <= 0)
		return (0);
	tmp = tab[0];
	while (len--)
		if (tab[len] > tmp)
			tmp = tab[len];
	return (tmp);
}
