/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:09:56 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/29 21:11:57 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check(const char *s, char a)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == a)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		if (check (reject, s[i]))
			return (i);
		i++;
	}
	return (i);
}
