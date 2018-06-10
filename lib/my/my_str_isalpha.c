/*
** EPITECH PROJECT, 2017
** is
** File description:
** alpha
*/

#include "my.h"

int	my_str_isalpha(char const *str)
{
	int	i = 0;

	if (str[0] == '\0')
		return (1);
	while (str[i]) {
		if ((str[i] < 'a' && str[i] > 'Z') || str[i] > 'z' ||
			str[i] < 'A') {
			return (0);
		}
		i++;
	}
	return (1);
}
