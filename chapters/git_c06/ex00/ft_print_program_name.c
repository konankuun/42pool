/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfontani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:29:14 by kfontani          #+#    #+#             */
/*   Updated: 2024/07/25 14:40:14 by kfontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc <= 0)
		write(1, "Veuillewez entrer un seul argument.\n", 39);
	ft_print_program_name(argv[0]);
	return (0);
}
