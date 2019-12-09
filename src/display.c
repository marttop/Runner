/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** display
*/

#include "runner.h"

void game_scene(controll_t *s_controll)
{
    sfRenderWindow_clear(s_controll->s_game.window, sfBlack);
    display_background(s_controll);
    display_runner(s_controll);
    display_coins(s_controll);
    display_jelly(s_controll);
    display_monster(s_controll);
    sfRenderWindow_display(s_controll->s_game.window);
}

void menu_scene(controll_t *s_controll)
{
    sfRenderWindow_clear(s_controll->s_game.window, sfBlack);
    display_background(s_controll);
    sfRenderWindow_drawSprite(s_controll->s_game.window,
    s_controll->s_title.sprite, NULL);
    display_buttons(s_controll);
    sfRenderWindow_display(s_controll->s_game.window);
}

void game(controll_t *s_controll)
{
    if (s_controll->s_game.scene == 1) {
        touch_coin(s_controll);
        game_scene(s_controll);
        animation(s_controll);
    }
    if (s_controll->s_game.scene == 0) {
        menu_scene(s_controll);
    }
}