/*
** EPITECH PROJECT, 2022
** Settings Mouse Mouved for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void settings_texts_mouse_moved(game_t *game)
{
    settings_t *settings = game->assets->settings;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_game = sfText_getGlobalBounds(settings->game_text);
    sfFloatRect r_graphics = sfText_getGlobalBounds(settings->graphics_text);
    sfFloatRect r_audio = sfText_getGlobalBounds(settings->audio_text);
    sfFloatRect r_controls = sfText_getGlobalBounds(settings->controls_text);

    text_hover(settings->game_text, settings->clock, &r_game, coords);
    text_hover(settings->graphics_text, settings->clock, &r_graphics, coords);
    text_hover(settings->audio_text, settings->clock, &r_audio, coords);
    text_hover(settings->controls_text, settings->clock, &r_controls, coords);
}

void settings_mouse_moved(game_t *game)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    settings_texts_mouse_moved(game);
    settings_audio_mouse_moved(game);
    settings_controls_mouse_moved(game);
    settings_game_mouse_moved(game);
    settings_graphics_mouse_moved(game);
    top_bar_mouse_moved(game);
}
