/*
** EPITECH PROJECT, 2017
** capi
** File description:
** talize
*/

#include "my.h"

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (0);
	else
		return (1);
}

int	my_isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (0);
	else
		return (1);
}

char	*my_strcapitalize(char *str)
{
	int	i = 0;

	my_strlowcase(str);
	while (str[i]) {
		if (str[i] <= 'z' && str[i] >= 'a') {
			str[i] -= 32;
			break;
		}
		i++;
	}
	i += 1;
	while (str[i]) {
		if (my_isalpha(str[i - 1]) != 0 && is_digit(str[i - 1]) != 0
			&& my_isalpha(str[i]) == 0) {
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
