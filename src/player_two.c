/*
** EPITECH PROJECT, 2018
** player2
** File description:
** ...
*/

#include "my.h"
#include "get_next_line.h"
#include <signal.h>
#include "navy.h"

extern s_global *g;

void    begin_me_two(void)
{
	int     pid = getpid();

	my_printf("my_pid: %d\nsuccessfully connected\n\n", pid);
}

void    modif_tab_two(s_player *two)
{
	if (g->str[1] == 0)
		g->str[1] += 1;
	if (two->map[g->str[1] - '0' - 1][g->str[0] - 'A'] != '.' &&
		two->map[g->str[1] - '0' - 1][g->str[0] - 'A'] != 'o' &&
		two->map[g->str[1] - '0' - 1][g->str[0] - 'A'] != 'x') {
		kill(two->ene_pid, SIGUSR1);
		my_printf("%s: hit\n", g->str);
		two->map[g->str[1] - '0' - 1][g->str[0] - 'A'] = 'x';
	} else {
		kill(two->ene_pid, SIGUSR2);
		my_printf("%s: missed\n", g->str);
		if (two->map[g->str[1] - '0' - 1][g->str[0] - 'A'] == '.')
			two->map[g->str[1] - '0' - 1][g->str[0] - 'A'] = 'o';
	}

}

int     my_while_p2(s_player *two)
{
	char    *s;

	reset_global();
	disp_everything(two);
	my_printf("waiting for enemy's attack...\n");
	my_receive();
	modif_tab_two(two);
	if (my_win(two->map) == 14) {
		my_putchar('\n');
		disp_everything(two);
		return (1);
	}
	g->n = 0;
	g->cpt = 0;
	reset_global();
	s = verif_and_send(two);
	my_response();
	my_printf("%s: %s\n\n", s, touch_or_not(two, s));
	return (0);
}

int     player_two(s_player *two, char **av)
{
	begin_me_two();
	two->ene_pid = my_getnb(av[1]);
	kill(two->ene_pid, SIGUSR1);
	while (my_win(two->map) != 14 && my_win(two->adv) != 14) {
		if (my_while_p2(two) == 1)
			break;
	}
	disp_everything(two);
	return (my_win(two->map) == 14 ? 1 : 0);
}
