/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfontani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 13:09:49 by kfontani          #+#    #+#             */
/*   Updated: 2024/07/27 19:30:36 by kfontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = malloc((max - min - 1) * sizeof(int));
	i = 0;
	if (!arr)
		return (NULL);
	while (i < (max - min))
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

/*#include <stdio.h>
int main()
{
    int *arr;
    int min = 7;
    int max = 23;

    arr = ft_range(min, max);
    if(arr)
    {
        int i = 0;
        while(i < (max - min + 1))
        {
            printf("%d ", arr[i]);
            i++;
        }
        free(arr);
    }
    return (0);
}*/