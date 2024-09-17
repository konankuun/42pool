/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:11:40 by           #+#    #+#             */
/*   Updated: 2024/07/27 20:37:23 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_update_combination(int *nums, int n)
{
	int	i;
	int	j;

	i = n - 1;
	j = i + 1;
	while (i >= 0 && nums[i] == 9 - (n - 1 - i))
		i--;
	nums[i]++;
	while (j < n)
	{
		nums[j] = nums[j - 1] + 1;
		j++;
	}
}

void	ft_print_combn(int n)
{
	int	nums[10];
	int	i;

	i = 0;
	if (n <= 0 || n >= 10)
		return ;
	while (i < n)
	{
		nums[i] = i;
		i++;
	}
	while (1)
	{
		i = 0;
		while (i < n)
			ft_putchar(nums[i++] + '0');
		if (nums[0] == 10 - n)
			break ;
		ft_putchar(',');
		ft_putchar(' ');
		ft_update_combination(nums, n);
	}
}

/*int main() {
    ft_print_combn(3);
    return 0;
}*/
