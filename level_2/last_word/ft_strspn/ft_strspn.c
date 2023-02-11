/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:39:59 by ciclo             #+#    #+#             */
/*   Updated: 2022/11/19 15:51:15 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i] != '\0')
	{
		if (!ft_strchr(accept, s[i]))
			break;
		++i;
	}
	return (i);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		printf ("ft_strspn = [%zu]\n",ft_strspn(av[1], av[2]));
	return (0);
}
