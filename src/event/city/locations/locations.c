/*
** EPITECH PROJECT, 2022
** City Locations for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void city_locations(game_t *game)
{
    sfEvent *event = game->event->event;
    doors_t *doors = game->assets->city->doors;

    location_appartment_city(game);
    location_ice_cream_city(game);
    location_market_city(game);
    location_museum_city(game);
    location_clothe_shop_city(game);
}
