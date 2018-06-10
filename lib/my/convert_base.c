/*
** EPITECH PROJECT, 2017
** convert
** File description:
** base
*/

#include "my.h"

int	base_decimal(char *str, int base)
{
	int	i = 0;
	int	res = str[i] - 48;

	while (i != (my_strlen(str) - 1)) {
		res = res * base + (str[i + 1] - 48);
		i++;
	}
	return (res);
}

int	decimal_base(int nb, int base)
{
	int   resultat[64];
	int   i = 0;
	int   j = 0;
	char  *res;
	char  number[10] = {'0', '1', '2', '3', '4',
				'5', '6', '7', '8', '9'};

	res = malloc(sizeof(char) * 64);
	while (nb != 0) {
		resultat[i] = nb % base;
		nb /= base;
		i++;
	}
	i--;
	for (j = 0; i >= 0; j++ ) {
		res[j] = number[resultat[i]];
		i--;
	}
	res[j] = '\0';
	return (my_getnb(res));
}
