/*
** EPITECH PROJECT, 2018
** init
** File description:
** ...
*/

#include "my.h"
#include "get_next_line.h"
#include <signal.h>
#include "navy.h"

extern s_global *g;

char    **place_boat(char **map, char *buffer)
{
	int           a = 0;
	int           x1 = 0;
	int           y1 = 0;
	int           x2 = 0;
	int           y2 = 0;

	while (a <= 26) {
		y1 = buffer[a + 2] - 65;
		x1 = buffer[a + 3] - 49;
		map[x1][y1] = buffer[a];
		y2 = buffer[a + 5] - 65;
		x2 = buffer[a + 6] - 49;
		while (y1 <= y2 && x1 <= x2) {
			map[x1][y1] = buffer[a];
			(buffer[a + 2] < buffer[a + 5]) ? y1++ : x1++;
		}
		a += 8;
	}
	return (map);
}

char    **init_map(char *file)
{
	char    **map;
	char    *buffer;
	int     fd = file_exist(file);

	if (fd == -1)
		return (NULL);
	buffer = malloc(sizeof(char) * 33);
	read(fd, buffer, 32);
	buffer[32] = '\0';
	map = malloc(sizeof(char *) * 9);
	map[8] = NULL;
	for (int i = 0; i <= 7; i++)
		map[i] = my_strdup("........");
	if (check_map(buffer) != 0)
		return (NULL);
	map = place_boat(map, buffer);
	return (map);
}

int     init_struct(s_player *st, char **av, int ac)
{
	if (ac == 2)
		st->map = init_map(av[1]);
	if (ac == 3)
		st->map = init_map(av[2]);
	if (st->map == NULL)
		return (84);
	st->adv = malloc(sizeof(char *) * 9);
	st->adv[8] = NULL;
	for (int i = 0; i <= 7; i++)
		st->adv[i] = my_strdup("........");
	st->target = 0;
	st->pid = getpid();
	st->done = 0;
	st->ene_pid = 0;
	return (collision(st->map));
}
