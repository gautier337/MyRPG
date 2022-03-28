/*
** EPITECH PROJECT, 2022
** Key pressed Transitons for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void transitions_key_pressed(game_t *game)
{
    sfEvent *event = game->event->event;

    if (event->key.code == sfKeyReturn)
        game->stage = game->next_stage;
}
