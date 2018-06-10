/*
** EPITECH PROJECT, 2018
** player
** File description:
** ...
*/

#include "my.h"
#include "get_next_line.h"
#include "navy.h"

extern s_global *g;

void    begin_me(void)
{
	int     pid = getpid();

	my_printf("my_pid: %d\nwaiting for enemy connexion...\n", pid);
	get_sig_start();
	my_printf("\nenemy connected\n\n");
}

void    modif_tab_one(s_player *one)
{
	if (g->str[1] == 0)
		g->str[1] += 1;
	if (one->map[g->str[1] - '0' - 1][g->str[0] - 'A'] != '.' &&
		one->map[g->str[1] - '0' - 1][g->str[0] - 'A'] != 'o' &&
		one->map[g->str[1] - '0' - 1][g->str[0] - 'A'] != 'x' ) {
		usleep(100);
		kill(one->ene_pid, SIGUSR1);
		my_printf("hit\n\n");
		one->map[g->str[1] - '0' - 1][g->str[0] - 'A'] = 'x';
	} else {
		usleep(100);
		kill(one->ene_pid, SIGUSR2);
		my_printf("missed\n\n");
		if (one->map[g->str[1] - '0' - 1][g->str[0] - 'A'] == '.')
			one->map[g->str[1] - '0' - 1][g->str[0] - 'A'] = 'o';
	}
}

int     my_while_p1(s_player *one)
{
	char    *s;

	reset_global();
	disp_everything(one);
	s = verif_and_send(one);
	my_response();
	my_printf("%s: %s\n\n", s, touch_or_not(one, s));
	if (my_win(one->adv) == 14) {
		disp_everything(one);
		return (1);;
	}
	my_printf("waiting for enemy's attack...\n");
	reset_global();
	my_receive();
	my_printf("%s: ", g->str);
	modif_tab_one(one);
	g->n = 0;
	g->cpt = 0;
	return (0);
}

int     game_player_one(s_player *one)
{
	begin_me();
	one->ene_pid = g->ppid;
	while (my_win(one->map) != 14 && my_win(one->adv) != 14) {
		if (my_while_p1(one) == 1)
			break;
	}
	disp_everything(one);
	return (my_win(one->map) == 14 ? 1 : 0);
}
