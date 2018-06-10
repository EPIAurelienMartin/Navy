/*
** EPITECH PROJECT, 2017
** print
** File description:
** revalpha
*/

#include "my.h"

int	my_print_revalpha(void)
{
	int	i = 'z';

	while (i >= 'a') {
		my_putchar(i);
		i--;
	}
	return (0);
}
