/*
** EPITECH PROJECT, 2018
** gnl
** File description:
** ...
*/

#include "get_next_line.h"

int	my_strlen(char const *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

int     chek(char *str)
{
	int     i = 0;

	while (str[i]) {
		if (str[i] == '\n')
			return (84);
		i++;
	}
	return (0);
}

char	*my_conc(char *res, char *buffer, int size)
{
	int	i = 0;
	int	cpt = 0;
	char	*ret;

	for (i = 0; res[i]; i++);
	ret = malloc(sizeof(char) * (i + size + 1));
	if (!(ret))
		return (NULL);
	for (i = 0; res[i]; i++)
		ret[i] = res[i];
	while (size != 0 && cpt < size) {
		ret[i + cpt] = buffer[cpt];
		cpt++;
	}
	ret[i + size] = '\0';
	return (ret);
}

char    *my_rest(char *str)
{
	int     i = 0;
	char    *res = NULL;
	int     j = 0;

	while (str[i] && str[i] != '\n') {
		i++;
	}
	str[i] == '\n' ? i++ : i;
	for (j = 0; str[j]; j++);
	res = malloc(sizeof(char) * ((j - i) + 1));
	if (res == NULL)
		return (NULL);
	for (j = 0; str[i]; j++) {
		res[j] = str[i];
		i++;
	}
	res[j] = '\0';
	return (res);
}

char	*get_next_line(int fd)
{
	static int     size = 1;
	static char buffer[READ_SIZE] = {0};
	static char *tmp = "\0";
	char    *res = "\0";
	static int start = 0;

	if (buffer == NULL || READ_SIZE <= 0 || fd == -1)
		return (NULL);
	if (start++ != 0 && my_strlen(tmp) != 0)
		res = my_conc(tmp, NULL, 0);
	while (size != 0 && (size = read(fd, buffer, READ_SIZE)) > 0) {
		if ((res = my_conc(res, buffer, size)) && chek(res) == 84)
			break;
	}
	if (res == NULL || (tmp = my_rest(res)) == NULL || size == -1)
		return (NULL);
	if (size == 0 && my_strlen(res) == 0)
		return (NULL);
	for (int j = 0; res[j]; j++)
		res[j] == '\n' ? res[j] = '\0' : 0;
	return (res);
}
