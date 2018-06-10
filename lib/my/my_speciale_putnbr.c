/*
** EPITECH PROJECT, 2017
** put
** File description:
** speciale
*/

#include "my.h"

int    my_put_nbr_octal(int nb)
{
	int	res = my_putnbr_base(nb, "01234567");

	return (res);
}

int    my_put_nbr_hexap(long nbr, char *base)
{
	int     i = my_strlen(base);
	int res = 0;

	if (nbr < 0) {
		nbr *= -1;
		res += my_putchar('-');
		res += my_put_nbr_hexap(nbr, base);
	}
	else if (nbr >= i) {
		res += my_put_nbr_hexap(nbr / i, base);
		res += my_putchar(base[nbr % i]);
	} else
		res += my_putchar(base[nbr]);
	return (res);
}

int    my_put_nbr_hexa(unsigned int nb)
{
	int	res = my_putnbru_base(nb, "0123456789abcdef");

	return (res);
}

int    my_put_nbr_hexam(unsigned int nb)
{
	int	res = my_putnbru_base(nb, "0123456789ABCDEF");

	return (res);
}

int    my_put_nbr_bin(int nb)
{
	int	res = my_putnbr_base(nb, "01");

	return (res);
}
