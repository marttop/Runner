/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** nodes
*/

#include "runner.h"

void free_coins(coin_t *s_coin)
{
    coin_t *temp;
    while (s_coin != NULL) {
        temp = s_coin->next;
        destroy_coin(s_coin);
        free(s_coin);
        s_coin = temp;
    }
}