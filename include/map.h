/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** map
*/

#ifndef MAP_H_
#define MAP_H_
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "runner.h"

void init_map(controll_t *s_controll);
void get_coins(controll_t *s_controll, char *map);
char *get_map(void);

#endif