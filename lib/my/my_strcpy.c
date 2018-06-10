/*
** EPITECH PROJECT, 2017
** str
** File description:
** cpy
*/

#include "my.h"

char	*my_strcpy(char *dest, char const *src)
{
	int	i = 0;

	while (src[i]) {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
