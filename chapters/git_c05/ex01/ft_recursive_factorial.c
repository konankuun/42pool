/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:41:22 by           #+#    #+#             */
/*   Updated: 2024/07/25 13:15:55 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*#include <stdio.h>
int	main()
{
    int n;
    
    n = 5;
    printf("La factorielle de %d est : %d\n", n, ft_recursive_factorial(n));
    return (0);
}*/sult = result * 10 + (b));
  