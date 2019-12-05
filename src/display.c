/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** display
*/

#include "runner.h"

void permanent_displays(controll_t *s_controll)
{
    sfRenderWindow_clear(s_controll->s_game.window, sfBlack);
    display_background(s_controll);
    display_runner(s_controll);
    display_coins(s_controll);
    sfRenderWindow_display(s_controll->s_game.window);
}