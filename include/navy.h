/*
** EPITECH PROJECT, 2018
** navy
** File description:
** ...
*/

#ifndef NAVY_H_
# define NAVY_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <time.h>
#include <signal.h>
#include "my.h"

typedef struct
{
	char	**map;
	char	**adv;
	char	*target;
	int	pid;
	int	ene_pid;
	int	done;
} s_player;

typedef struct  t_global
{
	int     ppid;
	int     n;
	int     n1;
	char    *str;
	int     cpt;
	int     tk;
}	s_global;

int	check_my_file(char *str);
int	check_map(char *str);
void    my_help(void);
void    my_aff_map(char **map);
int     collision(char **tab);
void    disp_everything(s_player *st);
int     my_win(char **tab);
int     chek(char *str);
char	*my_conc(char *res, char *buffer, int size);
char    *my_rest(char *str);
char	*get_next_line(int fd);
void    handle_signal(int signal, siginfo_t *si, void *context);
void    handle_response(int signal, siginfo_t *si, void *context);
void    get_sig_start(void);
int     my_response(void);
int     my_receive(void);
char    **place_boat(char **map, char *buffer);
char    **init_map(char *file);
int     init_struct(s_player *st, char **av, int ac);
int     file_exist(char *file);
void	begin_me(void);
void	begin_me_two(void);
int	game_player_one(s_player *one);
int	player_two(s_player *two, char **av);
int     my_send(int nb1, int nb2, int pid);
char    *touch_or_not(s_player *st, char *s);
char    *verif_and_send(s_player *one);
int	init_global(void);
void	reset_global(void);

#endif
