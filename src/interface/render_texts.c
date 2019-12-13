/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** texts
*/

#include "runner.h"

void render_nbcoins_txt(controll_t *s_controll)
{
    s_controll->s_interface.coin_mult = sfText_create();
    sfText_setString(s_controll->s_interface.coin_mult, "x");
    sfText_setFont(s_controll->s_interface.coin_mult, s_controll->font);
    sfText_setCharacterSize(s_controll->s_interface.coin_mult, 30);
    sfText_setPosition(s_controll->s_interface.coin_mult,
    (sfVector2f){105 , 55});
}

void render_nbcoins_int(controll_t *s_controll)
{
    s_controll->s_interface.nb_coin = sfText_create();
    sfText_setString(s_controll->s_interface.nb_coin,
    my_put_strnbr(s_controll->s_interface.nb_coin_int));
    sfText_setFont(s_controll->s_interface.nb_coin, s_controll->font);
    sfText_setCharacterSize(s_controll->s_interface.nb_coin, 30);
    sfText_setPosition(s_controll->s_interface.nb_coin,
    (sfVector2f){135 , 57});
}