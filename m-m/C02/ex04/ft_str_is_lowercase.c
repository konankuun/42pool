/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfontani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:49:49 by kfontani          #+#    #+#             */
/*   Updated: 2024/07/21 18:00:34 by kfontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
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
        int res = ft_str_is_lowercase("ijfdfoOIJ");
        printf("%d", res);
        return 0;
}*/