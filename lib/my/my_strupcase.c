/*
** EPITECH PROJECT, 2017
** str
** File description:
** upcase
*/

#include "my.h"

char	*my_strupcase(char *str)
{
	int	i = 0;

	while (str[i]) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
