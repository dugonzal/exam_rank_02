/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:51:43 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/11 14:44:03 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h> // For write
#include <string.h>

int	ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

void	swap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

char *ft_strrev(char *str)
{
	int len;
	int count;
	char tmp;

	len = ft_strlen(str)- 1;
	count = 0;
	tmp = 0;
	while (len > count)
		swap(&str[len--], &str[count++]);
	return (str);
}

int	main(void)
{
	char s[] = "hola";
	printf ("%s", ft_strrev(s));
}
