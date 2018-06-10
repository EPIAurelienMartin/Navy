/*
** EPITECH PROJECT, 2017
** strncat
** File description:
** ncat
*/

#include "my.h"

char	*my_strncat(char *dest, char const *src, int nb)
{
	int	i = my_strlen(dest);
	int	count = 0;

	while (src[count] && count < nb) {
		dest[i + count] = src[count];
		count++;
	}
	dest[i + count] = '\0';
	return (dest);
}
