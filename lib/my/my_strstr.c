/*
** EPITECH PROJECT, 2017
** str
** File description:
** str
*/

#include "my.h"

int	my_find_next(char const *str, char const *to_find)
{
	int	i = 0;

	while (str[i] && to_find && str[i] == to_find[i])
		i++;
	if (i == my_strlen(to_find))
		return (1);
	else
		return (-1);
}

char	*my_strstr(char *str, char const *to_find)
{
	int	i = 0;
	int	j = 0;

	while (str[i]) {
		if (str[i] == to_find[0])
			j = my_find_next(&str[i], to_find);
		if (j == 1)
			break;
		i++;
	}
	if (j == 1)
		return (&str[i]);
	else
		return (NULL);
}
