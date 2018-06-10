/*
** EPITECH PROJECT, 2017
** get
** File description:
** nbr
*/

#include "my.h"

int	my_getnbr(char const *str, int *i)
{
	int	res = 0;

	while (my_char_isnum(str[*i]) == 0 && str[*i]) {
		res *= 10;
		res += str[*i] - 48;
		*i += 1;
	}
	return (res);
}
