/*
** EPITECH PROJECT, 2019
** runner
** File description:
** runner
*/

#include "runner.h"

int render_runner(controll_t *s_controll)
{
    s_controll->s_runner.secconds = 0, s_controll->s_runner.inercy = 20;
    s_controll->s_runner.clock = sfClock_create();
    s_controll->s_runner.jump_cl = sfClock_create();
    s_controll->s_runner.rect.left = 0, s_controll->s_runner.rect.top = 0;
    s_controll->s_runner.rect.width = 133, s_controll->s_runner.jump = 0;
    s_controll->s_runner.rect.height = 120, s_controll->s_runner.fall = 0;
    s_controll->s_runner.texture =
    sfTexture_createFromFile("sprites/run.png", NULL);
    s_controll->s_runner.pos.x = 190, s_controll->s_runner.pos.y = 730;
    if (!s_controll->s_runner.texture)
        return (EXIT_FAILURE);
    s_controll->s_runner.sprite = sfSprite_create();
    sfSprite_setTexture(s_controll->s_runner.sprite,
    s_controll->s_runner.texture, sfTrue);
    sfSprite_setPosition(s_controll->s_runner.sprite, s_controll->s_runner.pos);
    return (0);
}

void draw_runner(controll_t *s_controll)
{
    sfRenderWindow_drawSprite(s_controll->s_game.window,
    s_controll->s_runner.sprite, NULL);
    if (s_controll->s_runner.secconds > 0.06 ) {
        sfSprite_setTextureRect(s_controll->s_runner.sprite,
        s_controll->s_runner.rect);
        move_rect_runner(s_controll, 133, 399);
        sfClock_restart(s_controll->s_runner.clock);
    }
}

void display_runner(controll_t *s_controll)
{
    if (s_controll->s_runner.jump != 1 && s_controll->s_runner.fall != 1
    && s_controll->s_slide.slide != 1) {
        draw_runner(s_controll);
    }
    if (s_controll->s_runner.jump_sec > 0.016) {
        if (s_controll->s_runner.jump == 1)
            jump(s_controll);
        if (s_controll->s_runner.fall == 1)
            fall(s_controll);
    }
    if (s_controll->s_slide.slide == 1) {
        if (s_controll->s_slide.secconds > 0.085)
            slide(s_controll);
        sfRenderWindow_drawSprite(s_controll->s_game.window,
        s_controll->s_slide.sprite, NULL);
    }
}