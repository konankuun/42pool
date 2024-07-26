/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfontani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:09:59 by kfontani          #+#    #+#             */
/*   Updated: 2024/07/25 14:18:24 by kfontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*arg;
	int		len;

	i = argc - 1;
	if (argc <= 1)
		write(1, "Veuillez mettre au moins un argument.\n", 38);
	while (i > 0)
	{
		arg = argv[i];
		len = 0;
		while (arg[len] != '\0')
		{
			len++;
		}
		write(1, arg, len);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
