/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** nodes
*/

#include "runner.h"

void free_monster(monster1_t *s_monster, controll_t *s_controll)
{
    monster1_t *temp = s_controll->s_monster;
    if (s_controll->s_monster != s_monster) {
        while (temp->next != s_monster)
            temp = temp->next;
        temp->next = s_monster->next;
        destroy_monster(s_monster);
        free(s_monster);
    }
    else {
        s_controll->s_monster = s_monster->next;
        destroy_monster(s_monster);
        free(s_monster);
    }
}

void free_coin(coin_t *s_coin, controll_t *s_controll)
{
    coin_t *temp = s_controll->s_coin;
    if (s_controll->s_coin != s_coin) {
        while (temp->next != s_coin)
            temp = temp->next;
        temp->next = s_coin->next;
        destroy_coin(s_coin);
        free(s_coin);
    }
    else {
        s_controll->s_coin = s_coin->next;
        destroy_coin(s_coin);
        free(s_coin);
    }
}