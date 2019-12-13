/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** display_texts
*/

#include "runner.h"

void display_texts(controll_t *s_controll)
{
    sfRenderWindow_drawText(s_controll->s_game.window,
    s_controll->s_interface.coin_mult, NULL);
    sfRenderWindow_drawText(s_controll->s_game.window,
    s_controll->s_interface.nb_coin, NULL);
}