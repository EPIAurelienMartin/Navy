/*
** EPITECH PROJECT, 2017
** eveil
** File description:
** str
*/

#include "my.h"

char	*my_evil_str(char *str)
{
	int	i = 0;
	int	j = 0;
	char	a;

	while (str[i] != '\0')
		i++;
	i -= 1;
	while (i != j && i > j) {
		a = str[i];
		str[i] = str[j];
		str[j] = a;
		i--;
		j++;
	}
	return (str);
}
