/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** obstacle
*/

#include "runner.h"

obstacle_t *render_obstacle(obstacle_t *s_obstacle, int height, int posx)
{
    obstacle_t *new_obstacle = malloc(sizeof(obstacle_t));
    new_obstacle->texture =
    sfTexture_createFromFile("sprites/obstacle1.png", NULL);
    new_obstacle->sprite = sfSprite_create();
    sfSprite_setTexture(new_obstacle->sprite, new_obstacle->texture, sfTrue);
    if (height == 2)
        new_obstacle->pos = (sfVector2f){posx, 650};
    else
        new_obstacle->pos = (sfVector2f){posx, 600};
    sfSprite_setPosition(new_obstacle->sprite, new_obstacle->pos);
    new_obstacle->next = s_obstacle;
    return (new_obstacle);
}

void display_obstacle(controll_t *s_controll)
{
    obstacle_t *temp = s_controll->s_obstacle;
    for (; temp != NULL;) {
        draw_obstacle(s_controll, temp);
        temp = temp->next;
    }
}

void draw_obstacle(controll_t *s_controll, obstacle_t *s_obstacle)
{
    sfSprite_setPosition(s_obstacle->sprite, s_obstacle->pos);
    sfRenderWindow_drawSprite(s_controll->s_game.window, s_obstacle->sprite, NULL);
    move_obstacle(s_controll, s_obstacle);

}

void move_obstacle(controll_t *s_controll, obstacle_t *s_obstacle)
{
    if (s_obstacle->pos.x > -300) {
        s_obstacle->pos.x -= 750 * s_controll->s_background.secconds *
        s_controll->s_game.speed;
    }
    else {
        free_obstacle(s_obstacle, s_controll);
    }
}