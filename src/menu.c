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
    if (s_button->id == 0) {
        if ((mouse_pos.x > s_button->pos.x && mouse_pos.x < s_button->pos.x + 200)
        && (mouse_pos.y > s_button->pos.y && mouse_pos.y < s_button->pos.y + 65)) {
            s_controll->s_game.scene = 1;
            render_sprites(s_controll);
        }
    }
    else {
        if ((mouse_pos.x > s_button->pos.x && mouse_pos.x < s_button->pos.x + 200)
        && (mouse_pos.y > s_button->pos.y && mouse_pos.y < s_button->pos.y + 65))
            sfRenderWindow_close(s_controll->s_game.window);
    }
}

void button_hitbox(controll_t *s_controll)
{
    buttons_t *temp =s_controll->s_button;

    while (temp != NULL) {
        check_play(temp, s_controll);
        temp = temp->next;
    }
}