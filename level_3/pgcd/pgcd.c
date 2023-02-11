/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:30:39 by ciclo             #+#    #+#             */
/*   Updated: 2023/01/22 17:32:54 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    pgcd(int a, int b)
{
    int c;
    if (a <= 0 || b <= 0)
        return ;    
    if (a > b)
        c = a;
    else
        c = b;
    while (c)
    {
        if (a % c == 0 && b % c == 0)
        {
            printf ("%d", c);
            return;
        }
        c--;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        pgcd (atoi(av[1]), atoi(av[2]));
    printf ("\n");
}