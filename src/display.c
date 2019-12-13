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
    display_background(s_controll),
    display_runner(s_controll);
    display_coins(s_controll), display_monster(s_controll);
    display_obstacle(s_controll), display_jelly(s_controll);
    if (s_controll->s_game.scene == 2) {
        display_pause(s_controll);
        display_stopped(s_controll);
        check_on_button(s_controll);
    }
    display_coin_interface(s_controll);
    display_texts(s_controll);
    sfRenderWindow_display(s_controll->s_game.window);
}

void menu_scene(controll_t *s_controll)
{
    sfRenderWindow_clear(s_controll->s_game.window, sfBlack);
    display_background(s_controll);
    sfRenderWindow_drawSprite(s_controll->s_game.window,
    s_controll->s_title.sprite, NULL);
    if (s_controll->s_game.scene == 0)
        display_buttons(s_controll);
    else
        display_levels(s_controll);
    sfRenderWindow_display(s_controll->s_game.window);
}

void game(controll_t *s_controll)
{
    if (s_controll->s_game.scene == 1 || s_controll->s_game.scene == 2) {
        setpos_background(s_controll);
        game_scene(s_controll);
        animation(s_controll);
        touch_obstacle(s_controll);
        touch_coin(s_controll);
        touch_monster(s_controll);
    }
    if (s_controll->s_game.scene == 0 || s_controll->s_game.scene == 3) {
        check_on_button(s_controll);
        menu_scene(s_controll);
    }
}