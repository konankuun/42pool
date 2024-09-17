/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:36:32 by           #+#    #+#             */
/*   Updated: 2024/07/25 13:22:41 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (1 / ft_recursive_power(nb, -power));
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_recursive_power(2, 3));
	return 0;
}*/
    return (0);
}*/erative_p