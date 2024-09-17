/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:41:24 by           #+#    #+#             */
/*   Updated: 2024/07/25 13:06:48 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 1 || index == 0)
		return (index);
	else if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*#include <stdio.h>
int main()
{
    int index = 10;
    printf("Le %deme nombre de Fibonacci est: %d\n", index, ft_fibonacci(index));
    return 0;
}*/3));
	return 0;
}*/