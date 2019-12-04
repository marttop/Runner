/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** clock
*/

#include "runner.h"

void init_clocks(controll_t *s_controll)
{
    s_controll->s_runner.time =
    sfClock_getElapsedTime(s_controll->s_runner.clock);
    s_controll->s_background.time =
    sfClock_getElapsedTime(s_controll->s_background.clock);
    s_controll->s_runner.time_air =
    sfClock_getElapsedTime(s_controll->s_runner.jump_cl);
    s_controll->s_runner.secconds =
    s_controll->s_runner.time.microseconds / 1000000.0;
    s_controll->s_background.secconds =
    s_controll->s_background.time.microseconds / 1000000.0;
    s_controll->s_runner.jump_sec =
    s_controll->s_runner.time_air.microseconds / 1000000.0;
    init_clocks2(s_controll);
}

void init_clocks2(controll_t *s_controll)
{
    s_controll->s_slide.time =
    sfClock_getElapsedTime(s_controll->s_slide.clock);
    s_controll->s_slide.secconds =
    s_controll->s_slide.time.microseconds / 1000000.0;
}