/*
** EPITECH PROJECT, 2022
** Init Sounds for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_sounds(game_t *game)
{
    game->audio->sounds = malloc(sizeof(sounds_t));
}
