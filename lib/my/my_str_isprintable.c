/*
** EPITECH PROJECT, 2017
** is
** File description:
** printable
*/

#include "my.h"

int	my_str_isprintable(char const *str)
{
	int     i = 0;

	if (str[0] == '\0')
		return (1);
	while (str[i]) {
		if (str[i] < 32)
			return (0);
		i++;
	}
	return (1);
}
