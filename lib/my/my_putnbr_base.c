/*
** EPITECH PROJECT, 2017
** nb
** File description:
** base
*/

#include "my.h"

int	my_putnbru_base(unsigned int nbr, char const *base)
{
	unsigned int	i = my_strlen(base);
	int res = 0;

	if (nbr >= i) {
		res += my_putnbru_base(nbr / i, base);
		res += my_putchar(base[nbr % i]);
	} else
		res += my_putchar(base[nbr]);
	return (res);
}

int	my_putnbr_base(int nbr, char const *base)
{
	int	i = my_strlen(base);
	int res = 0;

	if (nbr < 0) {
		nbr *= -1;
		res += my_putchar('-');
		res += my_putnbr_base(nbr, base);
	}
	else if (nbr >= i) {
		res += my_putnbr_base(nbr / i, base);
		res += my_putchar(base[nbr % i]);
	} else
		res += my_putchar(base[nbr]);
	return (res);
}
