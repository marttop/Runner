/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** read_map
*/

#include "runner.h"

char *get_map(void)
{
    int fd = open("maps/map1", O_RDONLY);
    struct stat sb;
    stat("maps/map1", &sb);
    char *map = malloc(sizeof(char) * sb.st_size);
    read(fd, map, sb.st_size);
    map[sb.st_size] = '\0';
    close(fd);
    return (map);
}

void get_coins(controll_t *s_controll, char *map)
{
    int index_v = 1, index_h = 0, distance = 0;
    coin_t *s_coin = NULL;
    monster1_t *s_monster = NULL;
    for (int i = 0; map[i] != 'E'; i++) {
        if (map[i] == '\n')
            index_h = 0, index_v++;
        if (map[i] == '1') {
            s_coin = render_coin(s_coin, index_v, (index_h * 25) + distance);
        }
        if (map[i] == '2')
            s_monster =
            render_monster(s_monster, index_v, (index_h * 25) + distance);
        index_h++;
        if (map[i] == 'Z')
            index_h = 0, index_v = 0, distance += 1920;
    }
    s_controll->s_monster = s_monster, s_controll->s_coin = s_coin;
    free(map);
}

void init_map(controll_t *s_controll)
{
    char *map = get_map();
    get_coins(s_controll, map);
}