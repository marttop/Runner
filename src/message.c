/*
** EPITECH PROJECT, 2019
** message
** File description:
** message
*/

#include "runner.h"

int message(void)
{
    write(1, "USAGE\n", 6);
    write(1, "    ./my_runner\n\n", 17);
    write(1, "DESCRIPTION\n", 12);
    write(1, "    Runner game\n", 16);
    write(1, "Good luck try your best and have fun !\n\n", 40);
    write(1, "CONTROLS\n", 9);
    write(1, "    SPACE to jump\n", 18);
    write(1, "    LCTRL to slide\n    P to pause\n    R to resume\n", 50);
    return (EXIT_SUCCESS);
}