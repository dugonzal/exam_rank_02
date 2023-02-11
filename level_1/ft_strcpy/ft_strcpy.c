/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 09:29:23 by ciclo             #+#    #+#             */
/*   Updated: 2022/11/05 09:37:40 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dst, char *src)
{
	while (*src)
		*dst++ = *src++;
	return (dst);
}

int	main(int ac, char **av)
{
	(void)ac;
	char ss[33];
	ft_strcpy (ss, av[1]);
	printf ("%s", ss);
}
