/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfontani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:27:02 by kfontani          #+#    #+#             */
/*   Updated: 2024/07/22 14:51:17 by kfontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return ((unsigned char)*s1 - (unsigned char)*s2);
		}
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*#include <stdio.h>
int main() {
    char str1[] = "Bonsoir";
    char str2[] = "Bonsoir";
    char str3[] = "Bonjour";
    char str4[] = "Bonjoir";

    printf("Comparison de str1 et str2: %d\n", ft_strcmp(str1, str2)); 
    printf("Comparison de str1 et str3: %d\n", ft_strcmp(str1, str3));
    printf("Comparison of str1 et str4: %d\n", ft_strcmp(str1, str4));

    return 0;
}*/