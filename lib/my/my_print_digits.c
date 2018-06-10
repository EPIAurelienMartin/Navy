/*
** EPITECH PROJECT, 2017
** print
** File description:
** digits
*/

#include "my.h"

int	my_print_digits(void)
{
	int	i = '0';

	while (i <= '9') {
		my_putchar(i);
		i++;
	}
	return (0);
}
