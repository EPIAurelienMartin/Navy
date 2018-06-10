/*
** EPITECH PROJECT, 2017
** neg
** File description:
** or not
*/

#include "my.h"

int	my_isneg(int n)
{
	if (n < 0)
		my_putchar('N');
	else
		my_putchar('P');
	return (0);
}
