/*
** EPITECH PROJECT, 2022
** stage
** File description:
** stage
*/

#include "rpg.h"

void select_game_stage_3(game_t *game)
{
    switch (game->stage) {
        default:
            break;
    }
}

void select_game_stage_2(game_t *game)
{
    switch (game->stage) {
        default:
            break;
    }
    select_game_stage_3(game);
}

void select_game_stage(game_t *game)
{
    if (!game)
        return;
    switch (game->stage) {
        case MAP_STAGE:
            map_stage(game);
            break;
        default:
            break;
    }
    select_game_stage_2(game);
}
