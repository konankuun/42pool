/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:52:28 by           #+#    #+#             */
/*   Updated: 2024/07/20 17:59:39 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <unistd.h>
int main(void) {
    int a = 10;
    int b = 3;
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);

    char buffer[50]; 
    int length;

    length = sprintf(buffer, "a: %d\nb: %d\ndiv: %d\nmod: %d\n", a, b, div, mod);

    write(1, buffer, length);

    return 0;
}*/