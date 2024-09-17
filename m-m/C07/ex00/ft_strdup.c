/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 12:56:19 by           #+#    #+#             */
/*   Updated: 2024/07/27 13:08:59 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;
	int		i;

	len = 0;
	while (src[len])
		len++;
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
int main()
{
	char    *str = "Hello world!";
    char    *dup;

    dup = ft_strdup(str);
    printf("Chaine dupliquee : %s\n", dup);
    free(dup);
    return (0);
}*/