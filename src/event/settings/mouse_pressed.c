/*
** EPITECH PROJECT, 2022
** Settings Mouse Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void settings_texts_mouse_pressed(game_t *game)
{
    settings_t *settings = game->assets->settings;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_game = sfText_getGlobalBounds(settings->game_text);
    sfFloatRect r_graphics = sfText_getGlobalBounds(settings->graphics_text);
    sfFloatRect r_audio = sfText_getGlobalBounds(settings->audio_text);
    sfFloatRect r_controls = sfText_getGlobalBounds(settings->controls_text);

    if (sfFloatRect_contains(&r_game, coords.x, coords.y))
        settings->current = SETTINGS_STAGE_GAME;
    if (sfFloatRect_contains(&r_graphics, coords.x, coords.y))
        settings->current = SETTINGS_STAGE_GRAPHICS;
    if (sfFloatRect_contains(&r_audio, coords.x, coords.y))
        settings->current = SETTINGS_STAGE_AUDIO;
    if (sfFloatRect_contains(&r_controls, coords.x, coords.y))
        settings->current = SETTINGS_STAGE_CONTROLS;
}

void settings_mouse_pressed(game_t *game)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    settings_texts_mouse_pressed(game);
    settings_audio_mouse_pressed(game);
    settings_controls_mouse_pressed(game);
    settings_game_mouse_pressed(game);
    settings_graphics_mouse_pressed(game);
    top_bar_mouse_pressed(game);
}
