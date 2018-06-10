/*
** EPITECH PROJECT, 2018
** display
** File description:
** ...
*/

#include "my.h"
#include "get_next_line.h"
#include <signal.h>
#include "navy.h"

extern s_global *g;

void    my_help(void)
{
	my_putstr("USAGE\n");
	my_putstr("\t./navy [first_player_pid] navy_pisitions\n");
	my_putstr("DESCRIPTION\n");
	my_putstr("\tfirst_player_pid:\t");
	my_putstr("only for the 2nd player.\tpid of the first player.\n");
	my_putstr("\tnavy_positions:\t");
	my_putstr("file representing the positions of the ships.\n");
}

void    my_aff_map(char **map)
{
	int   i = 0;
	int   j;
	int   x = 0;

	my_printf(" |A B C D E F G H\n");
	my_putstr("-+---------------\n");
	for (i = 0; i < 8; i++) {
		j = 0;
		my_printf("%d|", i + 1);
		while (j < 8) {
			my_printf("%c ", map[x][j]);
			j++;
		}
		x++;
		my_putchar('\n');
	}
}

int     collision(char **tab)
{
	int     y = 0;
	int     x = 0;
	int     i = 0;

	while (tab[y] != NULL) {
		x = 0;
		while (tab[y][x] != '\0') {
			tab[y][x] == '2' ? i++ : 0;
			tab[y][x] == '3' ? i++ : 0;
			tab[y][x] == '4' ? i++ : 0;
			tab[y][x] == '5' ? i++ : 0;
			x++;
		}
		y++;
	}
	if (i != 14) {
		my_putstr("Collision between boats\n");
		return (84);
	}
	return (0);
}

void    disp_everything(s_player *st)
{
	my_printf("my positions:\n");
	my_aff_map(st->map);
	my_printf("\nenemy's positions:\n");
	my_aff_map(st->adv);
}

int     my_win(char **tab)
{
	int     nb = 0;
	int     y = 0;
	int     x = 0;

	while (tab[y]) {
		x = 0;
		while (tab[y][x]) {
			nb += (tab[y][x] == 'x' ? 1 : 0);
			x++;
		}
		y++;
	}
	return (nb);
}
