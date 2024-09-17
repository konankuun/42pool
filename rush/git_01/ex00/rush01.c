/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npons <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 17:53:36 by              #+#    #+#             */
/*   Updated: 2024/07/28 23:14:37 by             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	look_errors(char *arg)
{
	int	i;
	int	error;

	i = 0;
	error = 0;
	while (arg[i])
	{
		if (!((arg[i] >= '1' && arg[i] <= '4') || arg[i] == ' '))
			error++;
		if (error == 1)
			return (1);
		i++;
	}
	return (0);
}

int	look_value(char *arg)
{
	int	i;
	int	four;
	int	one;
	int	nb;

	i = 0;
	while (arg[i])
	{
		if (arg[i] >= '0' && arg[i] <= '9')
			nb++;
		if (arg[i] == '4')
			four++;
		if (arg[i] == '1')
			one++;
		if (one == 2 || four == 2)
			return (1);
		if (nb == 4)
		{
			one = 0;
			four = 0;
			nb = 0;
		}
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	look;
	int	error;

	error = look_errors(av[1]);
	look = look_value(av[1]);
	if (ac != 2)
	{
		write(1, "Error", 5);
		return (0);
	}
	if (look == 1)
	{
		write(1, "Error", 5);
		return (0);
	}
	if (error == 1)
	{
		write(1, "Error", 5);
		return (0);
	}
	else
	{
		write(1, "0 0 0 0\n0 0 0 0\n0 0 0 0\n0 0 0 0\n", 33);
	}
}
