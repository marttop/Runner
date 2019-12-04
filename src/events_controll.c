/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** events_controll
*/

#include "runner.h"

void event_controll(controll_t *s_controll)
{
    if (s_controll->s_game.event.type == sfEvtClosed) {
        sfRenderWindow_close(s_controll->s_game.window);
    }
    if (s_controll->s_runner.jump != 1 && s_controll->s_runner.fall != 1) {
        if (sfKeyboard_isKeyPressed(sfKeyUp))
            s_controll->s_runner.jump = 1;
        if (sfKeyboard_isKeyPressed(sfKeyDown))
            s_controll->s_slide.slide = 1;
        else if (!sfKeyboard_isKeyPressed(sfKeyDown))
            s_controll->s_slide.slide = 0;
    }
}