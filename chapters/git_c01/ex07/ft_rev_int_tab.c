/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:40:59 by           #+#    #+#             */
/*   Updated: 2024/07/27 20:48:13 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size -1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

/*#include <stdio.h>
int main() {
    int tab[] = {1, 2, 3, 4, 5};
    int size = sizeof(tab) / sizeof(tab[0]);
    
    printf("Avant inversion : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    
    ft_rev_int_tab(tab, size);
    
    printf("Après inversion : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    
    return 0;
}*/