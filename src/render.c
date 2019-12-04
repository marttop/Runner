/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** render
*/

#include "runner.h"

void render_texts(controll_t *s_controll)
{
}

void render_sprites(controll_t *s_controll)
{
    render_runner(s_controll);
    render_jump(s_controll);
    render_background(s_controll);
    render_slide(s_controll);
}

void render_all(controll_t *s_controll)
{
    sfRenderWindow_setFramerateLimit(s_controll->s_game.window, 60);
    render_sprites(s_controll);
}