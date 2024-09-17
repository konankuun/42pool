/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:32:49 by           #+#    #+#             */
/*   Updated: 2024/07/25 13:14:10 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

/*#include <stdio.h>
int main()
{
    int nb;
    
    nb = -4;
    printf("La factorielle de %d est %d\n", nb, ft_iterative_factorial(nb));
    return 0;
}*/<= '9')
	{
		result = result * 10 + (