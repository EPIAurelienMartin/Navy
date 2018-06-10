/*
** EPITECH PROJECT, 2018
** send
** File description:
** ...
*/

#include "my.h"
#include "get_next_line.h"
#include <signal.h>
#include "navy.h"

extern s_global *g;

int     my_send(int nb1, int nb2, int pid)
{
	int     i;

	i = 0;
	while (i != nb1) {
		kill(pid, SIGUSR1);
		usleep(100);
		i++;
	}
	kill(pid, SIGUSR2);
	i = 0;
	while (i != nb2) {
		kill(pid, SIGUSR1);
		usleep(100);
		i++;
	}
	kill(pid, SIGUSR2);
	return (1);
}

char    *touch_or_not(s_player *st, char *s)
{
	char    *hit = "hit";
	char    *miss = "missed";

	if (g->tk == 1)
		st->adv[s[1] - '0' - 1][s[0] - 'A'] = 'x';
	else {
		if (st->adv[s[1] - '0' - 1][s[0] - 'A'] != 'x')
			st->adv[s[1] - '0' - 1][s[0] - 'A'] = 'o';
	}
	return (g->tk == 1 ? hit : miss);
}

char    *verif_and_send(s_player *one)
{
	char    *s;
	int     ok = 0;

	while (ok != 1) {
		my_printf("\nattack: ");
		s = get_next_line(0);
		if (my_strlen(s) == 2 && s[0] >= 'A' &&
			s[0] <= 'H' && s[1] >= '1' && s[1] <= '8')
			ok = 1;
		else
			my_printf("wrong position");
	}
	my_send(s[0] - 'A', s[1] - 48, one->ene_pid);
	return (s);
}
