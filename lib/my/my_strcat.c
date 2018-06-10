/*
** EPITECH PROJECT, 2017
** str
** File description:
** cat
*/

#include "my.h"

char	*my_strcat(char *dest, char const *src)
{
	int     i = 0;
	int     count = 0;
	char    *res;

	res = malloc(sizeof(*res) * (my_strlen(dest) + my_strlen(src) + 1));
	while (dest[i]) {
		res[i] = dest[i];
		i++;
	}
	while (src[count]) {
		res[i + count] = src[count];
		count++;
	}
	res[i + count] = '\0';
	return (res);
}
