/*
** EPITECH PROJECT, 2022
** Settings Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void settings_stage(game_t *game)
{
    sfMusic_stop(game->audio->musics->music_city);
    sfView_setSize(game->view, VIEW_MENUS_SIZE);
    sfView_setCenter(game->view, VIEW_MENUS_POS);
    display_settings(game);
    display_cursor(game);
    check_rat_key_pressed(game);
}
