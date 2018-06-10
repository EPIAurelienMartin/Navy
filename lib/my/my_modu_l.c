/*
** EPITECH PROJECT, 2017
** modulol
** File description:
** modulol
*/

#include "my.h"

int	modulol(long unsigned int nbr, char *base)
{
	unsigned int     i = my_strlen(base);
	int res = 0;

	if (nbr >= i) {
		res += my_put_nbr_hexap(nbr / i, base);
		res += my_putchar(base[nbr % i]);
	} else
		res += my_putchar(base[nbr]);
	return (res);
}
