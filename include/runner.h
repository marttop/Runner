/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H
#include <stdlib.h>
#include <unistd.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "time.h"

typedef struct texts {
    sfFont *font;
} texts_t;

typedef struct runner {
    sfSprite *sprite;
    sfTexture *texture;
    sfClock *clock;
    sfClock *jump_cl;
    sfTime time;
    sfTime time_air;
    sfIntRect rect;
    float secconds;
    float jump_sec;
    sfVector2f pos;
    int jump;
    int fall;
    int inercy;
} runner_t;

typedef struct coin {
    sfSprite *sprite;
    sfTexture *texture;
    sfClock *clock;
    sfTime time;
    float secconds;
    sfVector2f pos;
    sfIntRect rect;
    int id;
    struct coin *next;
} coin_t;

typedef struct music {
    sfMusic *background_sound;
    sfSound *jump_sound;
    sfSoundBuffer *buff_jump;
    sfSound *slide_sound;
    sfSoundBuffer *buff_slide;
} music_t;

typedef struct jump {
    sfSprite *sprite_j;
    sfTexture *texture_j;
    sfSprite *sprite_f;
    sfTexture *texture_f;
} jump_t;

typedef struct slide {
    sfSprite *sprite;
    sfTexture *texture;
    sfClock *clock;
    sfTime time;
    sfIntRect rect;
    float secconds;
    sfVector2f pos;
    int slide;
} slide_t;

typedef struct background {
    sfSprite *layer1;
    sfSprite *layer1_bis;
    sfSprite *layer2;
    sfSprite *layer2_bis;
    sfSprite *layer3;
    sfSprite *layer3_bis;
    sfSprite *layer4;
    sfSprite *layer4_bis;
    sfSprite *layer5;
    sfSprite *layer5_bis;
    sfSprite *layer6;
    sfSprite *layer6_bis;
    sfSprite *layer7;
    sfSprite *layer8;
    sfTexture *texture1;
    sfTexture *texture2;
    sfTexture *texture3;
    sfTexture *texture4;
    sfTexture *texture5;
    sfTexture *texture6;
    sfTexture *texture7;
    sfTexture *texture8;
    sfVector2f pos1;
    sfVector2f pos1_bis;
    sfVector2f pos2;
    sfVector2f pos2_bis;
    sfVector2f pos3;
    sfVector2f pos3_bis;
    sfVector2f pos4;
    sfVector2f pos4_bis;
    sfVector2f pos5;
    sfVector2f pos5_bis;
    sfVector2f pos6;
    sfVector2f pos6_bis;
    sfVector2f pos7;
    sfVector2f pos8;
    sfClock *clock;
    sfTime time;
    float secconds;
} background_t;

typedef struct state {
    float mouse_posx;
    float mouse_posy;
    int score;
    char *strscore;
} state_t;

typedef struct game {
    sfRenderWindow *window;
    sfEvent event;
} game_t;

typedef struct controll {
    state_t s_state;
    game_t s_game;
    texts_t s_texts;
    runner_t s_runner;
    background_t s_background;
    jump_t s_jump;
    slide_t s_slide;
    music_t s_music;
    struct coin *s_coin;
    int nb_coins;
} controll_t;

int game_loop(controll_t *s_controll);
int message(void);

void event_controll(controll_t *s_controll);
void jump_slide(controll_t *s_controll);
void animation(controll_t *s_controll);
void jump(controll_t *s_controll);
void fall(controll_t *s_controll);
void slide(controll_t *s_controll);

void render_texts(controll_t *s_controll);
void render_sprites(controll_t *scontroll);
void render_sounds(controll_t *s_controll);
void render_all(controll_t *scontroll);
int render_runner(controll_t *s_controll);
void render_background(controll_t *scontroll);
int render_layer1(controll_t *s_controll);
int render_layer1_bis(controll_t *s_controll);
int render_layer2(controll_t *s_controll);
int render_layer2_bis(controll_t *s_controll);
int render_layer3(controll_t *s_controll);
int render_layer3_bis(controll_t *s_controll);
int render_layer4(controll_t *s_controll);
int render_layer4_bis(controll_t *s_controll);
int render_layer5(controll_t *s_controll);
int render_layer5_bis(controll_t *s_controll);
int render_layer6(controll_t *s_controll);
int render_layer6_bis(controll_t *s_controll);
int render_layer7(controll_t *s_controll);
int render_layer8(controll_t *s_controll);
void render_jump(controll_t *s_controll);
int render_slide(controll_t *s_controll);
int render_up(controll_t *s_controll);
int render_down(controll_t *s_controll);

void move_rect_runner(controll_t *s_controll, int offset, int max_value);
void move_rect_slide(controll_t *s_controll, int offset, int max_value);
void move_rect_coin(coin_t *s_coin, int offset, int max_value);
void move_layers(controll_t *s_controll);
void move_layer_1(controll_t *s_controll);
void move_layer_2(controll_t *s_controll);
void move_layer_3(controll_t *s_controll);
void move_layer_4(controll_t *s_controll);
void move_layer_5(controll_t *s_controll);
void move_layer_6(controll_t *s_controll);

void layers_display1(controll_t *s_controll);
void layers_display2(controll_t *s_controll);
void layers_setpos1(controll_t *s_controll);
void layers_setpos2(controll_t *s_controll);

void permanent_displays(controll_t *s_controll);
void display_runner(controll_t *s_controll);
void display_background(controll_t *s_controll);
void draw_runner(controll_t *s_controll);
void background_setposition(controll_t *s_controll);

void destroy_all(controll_t *s_controll);
void destroy_next(controll_t *s_controll);
void destroy_coin(coin_t *s_coin);
void init_clocks(controll_t *s_controll);
void init_clocks2(controll_t *s_controll);
void init_coin_clocks(controll_t *s_controll);

int background_sound(controll_t *s_controll);
int jump_sound(controll_t *s_controll);
int slide_sound(controll_t *s_controll);

void init_coin(controll_t *s_controll);
coin_t *render_coin(coin_t *s_coin, sfVector2f pos, int id);
void draw_coin(controll_t *s_controll, coin_t *s_coin);
void display_coins(controll_t *s_controll);
void move_coins(controll_t *s_controll, coin_t *s_coin);
void free_coins(coin_t *s_coin);

void check_coin_hitbox(coin_t *s_coin, controll_t *s_controll);
void touch_coin(controll_t *s_controll);
void remove_coin(controll_t *s_controll, coin_t *s_coin);

#endif