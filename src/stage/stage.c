/*
** EPITECH PROJECT, 2022
** stage
** File description:
** stage
*/

#include "rpg.h"

void check_escape_key_pressed(game_t *game)
{
    sfEvent *event = game->event->event;

    if (game->stage != SETTINGS_STAGE) {
        if (event->key.code == game->keys[ESCAPE]) {
            sfView_setRotation(game->view, 0);
            game->last_stage = game->stage;
            game->stage = SETTINGS_STAGE;
            event->key.code = sfKeyUnknown;
        }
        return;
    }
    if (event->key.code == game->keys[ESCAPE]) {
        if (game->last_stage == CITY_STAGE)
            sfView_setSize(game->view, VIEW_CITY_SIZE);
        game->stage = game->last_stage;
        event->key.code = sfKeyUnknown;
    }
}

void select_game_stage_3(game_t *game)
{
    switch (game->stage) {
        case ABILITIES_STAGE:
            abilities_stage(game);
            break;
        case SETTINGS_STAGE:
            settings_stage(game);
            break;
        default:
            break;
    }
    return check_escape_key_pressed(game);
}

void select_game_stage_2(game_t *game)
{
    switch (game->stage) {
        case MARKET_STAGE:
            market_stage(game);
            break;
        case CLOTHE_STAGE:
            clothe_stage(game);
            break;
        case MUSEUM1_STAGE:
            museum1_stage(game);
            break;
        case MUSEUM2_STAGE:
            museum2_stage(game);
            break;
        default:
            break;
    }
    select_game_stage_3(game);
}

void select_game_stage(game_t *game)
{
    switch (game->stage) {
        case START_STAGE:
            home_menu_stage(game);
            break;
        case CITY_STAGE:
            city_stage(game);
            break;
        case APPARTMENT_STAGE:
            appartment_stage(game);
            break;
        case ICE_STAGE:
            ice_stage(game);
            break;
        default:
            break;
    }
    select_game_stage_2(game);
}
