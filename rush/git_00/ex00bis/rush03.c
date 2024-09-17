/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 08:32:25 by           #+#    #+#             */
/*   Updated: 2024/07/20 20:43:19 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_verif(int x, int y)
{
	if ((x <= 0 || y <= 0) || (x > 2147483647 || y > 2147483647))
	{
		write (1, "Veuillez mettre une valeur entre 1 et 2147483647\n", 49);
		return (1);
	}
	return (0);
}

int	ft_write_line(int x, int y, int index_x, int index_y)
{
	while (index_x <= x)
	{	
		if ((index_y == 1 && index_x == 1)
			|| (index_y == y && index_x == 1))
			ft_putchar ('A');
		else if ((index_y == 1 && index_x == x)
			|| (index_y == y && index_x == x))
			ft_putchar ('C');
		else if ((index_y == 1) || (index_y == y)
			|| (index_x == 1) || (index_x == x))
			ft_putchar ('B');
		else
			ft_putchar (' ');
		index_x++;
	}
	return (index_x);
}

void	rush(int x, int y)
{
	int	index_x;
	int	index_y;

	if (ft_verif(x, y) == 1)
		return ;
	index_y = 1;
	while (index_y <= y)
	{
		index_x = 1;
		while (index_x <= x)
		{
			index_x = ft_write_line (x, y, index_x, index_y);
		}
		index_y++;
		ft_putchar ('\n');
	}
}

		}
		index_y++;
		ft_putchar ('\n');
	}
}('\n');
	}
}
