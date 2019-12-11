/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** render
*/

#include "runner.h"
#include "map.h"

void render_menu(controll_t *s_controll)
{
    init_buttons(s_controll);
    init_pause(s_controll);
    render_background(s_controll);
    render_title(s_controll);
}

void render_sprites(controll_t *s_controll)
{
    render_stopped(s_controll);
    render_jump(s_controll);
    render_slide(s_controll);
    render_jelly(s_controll);
    render_runner(s_controll);
    init_map(s_controll);
}

void render_sounds(controll_t *s_controll)
{
    background_sound(s_controll);
    jump_sound(s_controll);
    slide_sound(s_controll);
    coin_sound(s_controll);
}