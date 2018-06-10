/*
** EPITECH PROJECT, 2018
** handle
** File description:
** ...
*/

#include "my.h"
#include "get_next_line.h"
#include <signal.h>
#include "navy.h"

extern s_global *g;

void    handle_signal(int signal, siginfo_t *si, void *context)
{
	(void)context;
	g->ppid = si->si_pid;
	if (signal == SIGUSR1 && g->n1 == 0)
		g->n1 = 1;
	if (signal == SIGUSR1 && g->n1 == 1)
		g->str[g->cpt]++;
	if (signal == SIGUSR2 && g->cpt != 2)
		g->cpt++;
	if (signal == SIGUSR2 && g->cpt == 2)
		g->n = 1;
}

void    handle_response(int signal, siginfo_t *si, void *context)
{
	(void)context;
	(void)si;
	if (signal == SIGUSR1)
		g->tk = 1;
	if (signal == SIGUSR2)
		g->tk = 2;
}

void    get_sig_start(void)
{
	struct sigaction sa;
	sigset_t mask;

	sigemptyset(&mask);
	sa.sa_mask = mask;
	sa.sa_sigaction = handle_signal;
	sa.sa_flags = SA_SIGINFO;
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		my_printf("Error: cannot handle SIGUSR1\n");
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
		my_printf("Error: cannot handle SIGUSR2\n");
	while (g->n1 == 0)
		usleep(100);
}

int     my_response(void)
{
	struct sigaction sa;
	sigset_t mask;

	sigemptyset(&mask);
	sa.sa_flags = SA_SIGINFO;
	sa.sa_mask = mask;
	sa.sa_sigaction = handle_response;
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		my_printf("Error: cannot handle SIGUSR1\n");
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
		my_printf("Error: cannot handle SIGUSR2\n");
	while (g->tk == 0)
		usleep(100);
	return (1);
}

int     my_receive(void)
{
	struct sigaction sa;
	sigset_t mask;

	sigemptyset(&mask);
	sa.sa_flags = SA_SIGINFO;
	sa.sa_mask = mask;
	sa.sa_sigaction = handle_signal;
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		my_printf("Error: cannot handle SIGUSR1\n");
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
		my_printf("Error: cannot handle SIGUSR2\n");
	while (g->n == 0)
		usleep(100);
	return (1);
}
