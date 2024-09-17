/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:49:31 by           #+#    #+#             */
/*   Updated: 2024/07/29 13:47:04 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	int	swapped;

	i = 0;
	while (i < size - 1)
	{
		swapped = 0;
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
				swapped = 1;
			}
		}
		if (swapped == 0)
			break ;
		i++;
	}
}

/*#include <stdio.h>
void print_array(int *tab, int size)
{
	for (int i = 0; i < size; i++) {
		printf("%d ", tab[i]);
	}
	printf("\n");
}
int main() {
    int tab[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(tab) / sizeof(tab[0]);

    printf("Tableau avant le tri :\n");
    print_array(tab, size);

    ft_sort_int_tab(tab, size);

    printf("Tableau après le tri :\n");
    print_array(tab, size);

    return 0;
}*/
