/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:39:12 by           #+#    #+#             */
/*   Updated: 2024/07/20 11:49:52 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <unistd.h>
int main(void) {
    int x = 10;
    int y = 20;

    char buffer[50]; 
    int length;

    ft_swap(&x, &y);

    length = sprintf(buffer, "x: %d\ny: %d\n", x, y);
    
    write(1, buffer, length);

    return 0;
}*/