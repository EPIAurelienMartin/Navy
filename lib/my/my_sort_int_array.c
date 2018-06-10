/*
** EPITECH PROJECT, 2017
** sort
** File description:
** array
*/

#include "my.h"

void	my_sort_int_array(int *array, int size)
{
	int	i= 0;
	int	save = 0;

	while (i < size) {
		if (array[i] < array[i - 1]) {
			save = array[i];
			array[i] = array[i - 1];
			array[i - 1] = save;
			i++;
			i = 0;
		}
		i++;
	}
}
