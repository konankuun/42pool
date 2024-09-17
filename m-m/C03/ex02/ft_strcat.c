/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:16:51 by           #+#    #+#             */
/*   Updated: 2024/07/23 09:59:46 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*d;

	d = dest;
	while (*d != '\0')
	{
		d++;
	}
	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}
	*d = '\0';
	return (dest);
}

/*#include <stdio.h>
int main()
{
    char dest[50] = "Bonjour";
    char src[] = " tout le monde";
    
    printf("Avant : %s\n", dest);
    ft_strcat(dest, src);
    printf("Après : %s\n", dest);
    
    return 0;
}*/