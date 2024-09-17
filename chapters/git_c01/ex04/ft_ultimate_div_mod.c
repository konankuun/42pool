/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:00:38 by           #+#    #+#             */
/*   Updated: 2024/07/20 11:52:30 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	res_div;
	int	res_mod;

	res_div = *a / *b;
	res_mod = *a % *b;
	*a = res_div;
	*b = res_mod;
}

/*#include <unistd.h>
int main(void) {
    int a = 10;
    int b = 3;

    int *ptr_a = &a;
    int *ptr_b = &b;

    ft_ultimate_div_mod(ptr_a, ptr_b);

    char buffer[50]; 
    int length;

    length = sprintf(buffer, "a: %d\nb: %d\n", a, b);

    write(1, buffer, length);

    return 0;
}*/