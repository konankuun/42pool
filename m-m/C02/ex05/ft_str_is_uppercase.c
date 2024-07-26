/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfontani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:53:17 by kfontani          #+#    #+#             */
/*   Updated: 2024/07/21 18:01:22 by kfontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
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
        int res = ft_str_is_uppercase("HDuh");
        printf("%d", res);
        return 0;
}*/