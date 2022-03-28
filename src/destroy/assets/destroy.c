/*
** EPITECH PROJECT, 2022
** Destroy Assets for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_assets(assets_t *assets)
{
    if (!assets)
        return;
    destroy_appartment(assets->appartment);
    destroy_city(assets->city);
    destroy_home_menu(assets->home_menu);
    destroy_rat(assets->rat);
    free(assets);
}