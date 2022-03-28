/*
** EPITECH PROJECT, 2022
** Destroy Home Menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_home_menu(home_menu_t *menu)
{
    destroy_parallax(menu->parallax);
    for (int idx = 0; idx < 3; idx += 1) {
        sfSprite_destroy(menu->quit[idx]);
        sfSprite_destroy(menu->options[idx]);
    }
    free(menu->quit);
    free(menu->options);
    free(menu);
}
