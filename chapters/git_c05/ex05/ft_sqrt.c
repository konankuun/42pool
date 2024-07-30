/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfontani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:52:56 by kfontani          #+#    #+#             */
/*   Updated: 2024/07/25 13:07:44 by kfontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (0);
	else
	{
		i = 1;
		result = 0;
		while (result * result < nb)
		{
			result++;
		}
		if (result * result == nb)
			return (result);
		else
			return (0);
	}
}

/*#include <stdio.h>
int main()
{
    int nb = 0;
    printf("La racine carre de %d est %d\n", nb, ft_sqrt(nb));
    return 0;
}*/