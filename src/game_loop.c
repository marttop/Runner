/*
** EPITECH PROJECT, 2019
** game_loop
** File description:
** game_loop
*/

#include "runner.h"

int game_loop(controll_t *s_controll)
{
    render_all(s_controll);
    if (!s_controll->s_game.window)
        return (EXIT_FAILURE);
    sfMusic_play(s_controll->s_music.background_sound);
    while (sfRenderWindow_isOpen(s_controll->s_game.window)) {
        while (sfRenderWindow_pollEvent(s_controll->s_game.window,
        &s_controll->s_game.event)) {
            event_controll(s_controll);
        }
        permanent_displays(s_controll);
        animation(s_controll);
        touch_coin(s_controll);
    }
    destroy_all(s_controll);
    return (0);
}