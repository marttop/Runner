/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** buttons
*/

#include "runner.h"

buttons_t *render_buttons(buttons_t *s_button, char const *filepath,
                            sfVector2f pos, int id)
{
    buttons_t *new_button = malloc(sizeof(buttons_t));
    new_button->texture = sfTexture_createFromFile(filepath, NULL);
    new_button->sprite = sfSprite_create();
    sfSprite_setTexture(new_button->sprite, new_button->texture, sfTrue);
    sfSprite_setPosition(new_button->sprite, pos);
    new_button->pos = pos;
    new_button->next = s_button;
    new_button->id = id;
    return (new_button);
}

void init_buttons(controll_t *s_controll)
{
    buttons_t *s_button = NULL;
    int x = 880, y = 400;
    char const *file[2] = {"sprites/buttons/play_button.png",
    "sprites/buttons/quit_button.png"};
    for (int i = 0; i < 2; i++) {
        s_button = render_buttons(s_button, file[i], (sfVector2f){x, y}, i);
        y += 100;
    }
    s_controll->s_button = s_button;
}

void display_buttons(controll_t *s_controll)
{
    buttons_t *temp = s_controll->s_button;
    while (temp != NULL) {
        sfRenderWindow_drawSprite(s_controll->s_game.window,
        temp->sprite, NULL);
        temp = temp->next;
    }
}