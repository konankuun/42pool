/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:02:27 by           #+#    #+#             */
/*   Updated: 2024/07/21 18:02:09 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31
			|| str[i] == 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int main()
{
	int res = ft_str_is_printable("dgdfdfDDDd35343][=*(&*&^$^$\n^&]");
	printf("%d", res);
	return 0;
}*/n