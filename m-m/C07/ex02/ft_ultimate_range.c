/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfontani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:19:11 by kfontani          #+#    #+#             */
/*   Updated: 2024/07/29 18:02:51 by kfontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	arr = (int *)malloc (size * sizeof(int));
	if (!arr)
	{
		*range = NULL;
		return (-1);
	}
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (size);
}

/*#include <stdio.h>
int main() {
    int *range;
    int size;
    int i;

    // Test 1 : min < max
    size = ft_ultimate_range(&range, 5, 10);
    if (size == -1) {
        printf("Allocation échouée pour le Test 1\n");
    } else if (size == 0) {
        printf("Test 1 : min >= max, aucun élément à afficher\n");
    } else {
        printf("Test 1 : Range de 5 à 10 (exclus) -> taille : %d\n", size);
        for (i = 0; i < size; i++) {
            printf("%d ", range[i]);
        }
        printf("\n");
    }
    free(range); // Libération de la mémoire allouée

    // Test 2 : min >= max
    size = ft_ultimate_range(&range, 10, 5);
    if (size == -1) {
        printf("Allocation échouée pour le Test 2\n");
    } else if (size == 0) {
        printf("Test 2 : min >= max, aucun élément à afficher\n");
    } else {
        printf("Test 2 : Range de 10 à 5 (exclus) -> taille : %d\n", size);
        for (i = 0; i < size; i++) {
            printf("%d ", range[i]);
        }
        printf("\n");
    }
    // Pas besoin de libérer range ici car il doit être NULL

    // Test 3 : min == max
    size = ft_ultimate_range(&range, 7, 7);
    if (size == -1) {
        printf("Allocation échouée pour le Test 3\n");
    } else if (size == 0) {
        printf("Test 3 : min == max, aucun élément à afficher\n");
    } else {
        printf("Test 3 : Range de 7 à 7 (exclus) -> taille : %d\n", size);
        for (i = 0; i < size; i++) {
            printf("%d ", range[i]);
        }
        printf("\n");
    }
    // Pas besoin de libérer range ici car il doit être NULL

    // Test 4 : Large range
    size = ft_ultimate_range(&range, -5, 5);
    if (size == -1) {
        printf("Allocation échouée pour le Test 4\n");
    } else if (size == 0) {
        printf("Test 4 : min >= max, aucun élément à afficher\n");
    } else {
        printf("Test 4 : Range de -5 à 5 (exclus) -> taille : %d\n", size);
        for (i = 0; i < size; i++) {
            printf("%d ", range[i]);
        }
        printf("\n");
    }
    free(range); // Libération de la mémoire allouée

    return 0;
}*/