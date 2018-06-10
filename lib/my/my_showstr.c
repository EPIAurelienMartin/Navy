/*
** EPITECH PROJECT, 2017
** sho
** File description:
** wstr
*/

#include "my.h"

int     my_showstr(char const *str)
{
	int     i = 0;
	int	cpt = 0;

	while (str[i]) {
		if (str[i] >= ' ' && str[i] <= 126)
			cpt += my_putchar(str[i]);
		if (str[i] == 127)
			cpt += my_putstr("177");;
		if (str[i] < 7) {
			cpt += my_putstr("\\00");
			cpt += my_putnbr_base(str[i], "01234567");
		}
		else if (str[i] >= 10 && str[i] <= 31) {
			cpt += my_putstr("\\0");
			cpt += my_putnbr_base(str[i], "01234567");
		}
		i++;
	}
	return (cpt);
}
