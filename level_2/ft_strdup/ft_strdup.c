/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:52:55 by ciclo             #+#    #+#             */
/*   Updated: 2022/11/19 15:58:55 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_Strdup(char *src)
{
	int i;
	char *dst;

	i = 0;
	dst = (char *)malloc(sizeof(src));
	if (!dst)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	//dst[i] = '\0'; es lo mismo
	dst[i] = src[i]; // a esto
	return (dst);
}

int	main(void)
{
	printf("%s", ft_Strdup("hola"));
}
