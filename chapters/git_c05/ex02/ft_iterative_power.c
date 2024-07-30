/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfontani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:48:36 by kfontani          #+#    #+#             */
/*   Updated: 2024/07/25 13:17:54 by kfontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		while (i != power)
		{
			result *= nb;
			i++;
		}
	}
	return (result);
}

/*#include <stdio.h>
int main()
{
    printf("%d\n", ft_iterative_power(5, 0));
    return (0);
}*/