/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** destroy
*/

#include "runner.h"

void destroy_all(controll_t *s_controll)
{
    sfRenderWindow_destroy(s_controll->s_game.window);
    sfSprite_destroy(s_controll->s_background.layer1);
    sfSprite_destroy(s_controll->s_background.layer1_bis);
    sfSprite_destroy(s_controll->s_background.layer2);
    sfSprite_destroy(s_controll->s_background.layer2_bis);
    sfSprite_destroy(s_controll->s_background.layer3);
    sfSprite_destroy(s_controll->s_background.layer3_bis);
    sfSprite_destroy(s_controll->s_background.layer4);
    sfSprite_destroy(s_controll->s_background.layer4_bis);
    sfSprite_destroy(s_controll->s_background.layer5);
    sfSprite_destroy(s_controll->s_background.layer5_bis);
    sfSprite_destroy(s_controll->s_background.layer6);
    sfSprite_destroy(s_controll->s_background.layer6_bis);
    sfSprite_destroy(s_controll->s_background.layer7);
    sfSprite_destroy(s_controll->s_background.layer8);
}