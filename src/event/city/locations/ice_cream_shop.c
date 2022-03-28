/*
** EPITECH PROJECT, 2022
** Ice Cream Shop Location City for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void location_ice_cream_city(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (check_location_rect(rat->idle_front,
        LOCATION_ICE_SHOP, 31, 15) == true && rat->up == 1) {
        game->stage = ICE_STAGE;
        sfView_setCenter(game->view, VIEW_ICE_POS);
        sfView_setSize(game->view, VIEW_ICE_SIZE);
        set_rats_position(game, RAT_DEFAULT_POS_ICE_CREAM_SHOP);
        rat->speed = RAT_SPEED_ICE_CREAM_SHOP;
    }
}
