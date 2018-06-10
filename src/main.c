/*
** EPITECH PROJECT, 2017
** main
** File description:
** main
*/

#include "my.h"
#include "get_next_line.h"
#include <signal.h>
#include "navy.h"

s_global *g;

int     file_exist(char *file)
{
	int   fd;

	if (-1 == (fd = open(file, O_RDONLY))) {
		my_putstr("File doesn't exist !\n");
		return (-1);
	}
	return (fd);
}

void	reset_global(void)
{
		g->str[0] = 'A';
		g->str[1] = '0';
		g->tk = 0;
}

int	init_global(void)
{
	g = malloc(sizeof(s_global));
	g->n = 0;
	g->str = malloc(sizeof(char) * 3);
	g->str[0] = 'A';
	g->str[1] = '0';
	g->str[2] = 0;
	g->tk = 0;
	return (0);
}

int	main(int ac, char **av)
{
	s_player st;
	int	error = 0;
	int	ret = init_global();

	if (ac == 2) {
		if (my_strcmp(av[1], "-h") == 0)
			my_help();
		else if ((error = init_struct(&st, av, ac)) != 84)
			ret = game_player_one(&st);
		else
			return (84);
	} else if (ac == 3) {
		if ((error = init_struct(&st, av, ac)) != 84)
			ret = player_two(&st, av);
		else
			return (84);
	} else
		return (84);
	my_printf((ret == 0 ? "\nI Won\n" : "\nEnemy Won\n"));
	return (ret);
}
