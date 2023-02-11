/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:16:12 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/11 15:19:01 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_basae(const char *str, int str_base)
{
	int i;
	int result;
	int sign;

	i = 0;
	result = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * str_base + str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			result = result * str_base + str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			result = result * str_base + str[i] - 'A' + 10;
		else
			return (result * sign);
		i++;
	}
	return (result * sign);
}
