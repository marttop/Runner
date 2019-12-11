/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** menu
*/

#include "runner.h"
#include "map.h"

void render_title(controll_t *s_controll)
{
    s_controll->s_title.texture =
    sfTexture_createFromFile("sprites/buttons/title.png", NULL);
    s_controll->s_title.sprite = sfSprite_create();
    sfSprite_setTexture(s_controll->s_title.sprite,
    s_controll->s_title.texture, sfTrue);
    sfSprite_setPosition(s_controll->s_title.sprite, (sfVector2f){765, 50});
}

void check_play(buttons_t *s_button, controll_t *s_controll)
{
    sfVector2i mouse_pos =
    sfMouse_getPositionRenderWindow(s_controll->s_game.window);
    if ((mouse_pos.x > s_button->pos.x &&
    mouse_pos.x < s_button->pos.x + 155)
    && (mouse_pos.y > s_button->pos.y &&
    mouse_pos.y < s_button->pos.y + 42)) {
        if (s_button->id == 0) {
            s_controll->s_game.scene = 1;
            s_controll->s_game.speed = 1;
            render_sprites(s_controll), sfClock_restart(s_controll->s_background.clock);
        }
        if (s_button->id == 1)
            sfRenderWindow_close(s_controll->s_game.window);
    }
}

void check_pause(buttons_t *s_button, controll_t *s_controll)
{
    sfVector2i mouse_pos =
    sfMouse_getPositionRenderWindow(s_controll->s_game.window);
    if ((mouse_pos.x > s_button->pos.x &&
    mouse_pos.x < s_button->pos.x + 155)
    && (mouse_pos.y > s_button->pos.y &&
    mouse_pos.y < s_button->pos.y + 42)) {
        if (s_button->id == 0) {
            s_controll->s_game.scene = 1;
            s_controll->s_game.speed = 1;
        }
        if (s_button->id == 1) {
            s_controll->s_game.scene = 1;
            free_map(s_controll), init_map(s_controll);
            s_controll->s_game.speed = 1;
        }
        if (s_button->id == 2)
            end_game(s_controll);
        if (s_button->id == 3)
            sfRenderWindow_close(s_controll->s_game.window);
    }
}

void button_hitbox(controll_t *s_controll)
{
    buttons_t *temp;
    if (s_controll->s_game.scene == 0) {
        temp = s_controll->s_button;
        while (temp != NULL) {
            check_play(temp, s_controll);
            temp = temp->next;
        }
    }
    if (s_controll->s_game.scene == 2) {
        temp = s_controll->s_pause;
        while (temp != NULL) {
            check_pause(temp, s_controll);
            temp = temp->next;
        }
    }
}