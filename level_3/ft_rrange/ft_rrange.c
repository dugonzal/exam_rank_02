/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:53:25 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/14 20:05:36 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int i;
	int step;
	int *array;
	int numbers;

	numbers = end - start;
	array = (int *)malloc(sizeof(int) * numbers + 1);
	if (!array)
		return (NULL);
	if (start > end)
		step = 1;
	else
		step = -1;
	i = 0;
	while (i <= numbers)
	{
		array[i] = end;
		end += step;
		i++;
	}
	return (array);
}
