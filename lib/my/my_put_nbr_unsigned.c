/*
** EPITECH PROJECT, 2017
** put
** File description:
** unsigned
*/

#include "my.h"

int	my_put_nbr_unsigned(unsigned int nb)
{
	int	res = 0;
	int	reste = 0;

	if (nb >= 10) {
		reste = (nb % 10);
		nb = (nb - reste) / 10;
		res += my_put_nbr_unsigned(nb);
		res += my_putchar( '0' + reste);
	} else {
		res += my_putchar( '0' + nb );
	}
	return (res);
}
