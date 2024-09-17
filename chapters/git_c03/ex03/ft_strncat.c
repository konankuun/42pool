/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:26:24 by           #+#    #+#             */
/*   Updated: 2024/07/23 12:14:14 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, const char *src, unsigned int nb)
{
	unsigned int	i;
	char			*d;

	i = 0;
	d = dest;
	while (*d != '\0')
	{
		d++;
	}
	while (i < nb && *src != '\0')
	{
		*d = *src;
		d++;
		src++;
		i++;
	}
	*d = '\0';
	return (dest);
}

/*#include <stdio.h>
int main() {
    char dest[50] = "Bonjour";
    char src[] = " tout le monde";

    printf("Avant : %s\n", dest);
    ft_strncat(dest, src, 3); 
    printf("Après : %s\n", dest);

    return 0;
}*/