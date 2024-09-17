/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:53:07 by           #+#    #+#             */
/*   Updated: 2024/07/23 11:04:46 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i]
				- (unsigned char)s2[i]);
		}
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char)s1[i]
		- (unsigned char)s2[i]);
}

/*#include <stdio.h>
int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";
    char str4[] = "Hella";

    printf("Comparison des 5 premiers caracteres de str1 et str2: %d\n",
		ft_strncmp(str1, str2, 5));
    printf("Comparison des 3 premiers caracteres de str1 et str3: %d\n",
		ft_strncmp(str1, str3, 3));
    printf("Comparison des 4 premiers caracteres de str1 et str4: %d\n",
		ft_strncmp(str1, str4, 4));
    printf("Comparison des 5 premiers caracteres de str1 et str4: %d\n",
		ft_strncmp(str1, str4, 5));

    return 0;
}*/