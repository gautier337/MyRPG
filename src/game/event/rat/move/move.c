/*
** EPITECH PROJECT, 2022
** Move Rat City for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void move_rat_left(
    game_t *game, sfVector2f pos, sfSprite *rat, int speed_move)
{
    sfIntRect rect = init_rect(24, 66, 23, 22);
    sfVector2f scale = {-SCALE_RAT, SCALE_RAT};

    if (!rat_can_move_left(game))
        return;
    pos.x -= speed_move;
    sfSprite_setTextureRect(rat, rect);
    sfSprite_setScale(rat, scale);
    sfSprite_setPosition(rat, pos);
    set_sprite_origin(rat, rect);
}

void move_rat_right(
    game_t *game, sfVector2f pos, sfSprite *rat, int speed_move)
{
    sfIntRect rect = init_rect(24, 66, 23, 22);
    sfVector2f scale = {SCALE_RAT, SCALE_RAT};

    if (!rat_can_move_right(game))
        return;
    pos.x += speed_move;
    sfSprite_setTextureRect(rat, rect);
    sfSprite_setScale(rat, scale);
    sfSprite_setPosition(rat, pos);
    set_sprite_origin(rat, rect);
}

void move_rat_up(
    game_t *game, sfVector2f pos, sfSprite *rat, int speed_move)
{
    sfIntRect rect = init_rect(22, 95, 16, 21);
    sfVector2f scale = {SCALE_RAT, SCALE_RAT};

    if (!rat_can_move_up(game))
        return;
    pos.y -= speed_move;
    sfSprite_setTextureRect(rat, rect);
    sfSprite_setScale(rat, scale);
    sfSprite_setPosition(rat, pos);
    set_sprite_origin(rat, rect);
}

void move_rat_down(
    game_t *game, sfVector2f pos, sfSprite *rat, int speed_move)
{
    sfIntRect rect = init_rect(21, 39, 16, 21);
    sfVector2f scale = {SCALE_RAT, SCALE_RAT};

    if (!rat_can_move_down(game))
        return;
    pos.y += speed_move;
    sfSprite_setTextureRect(rat, rect);
    sfSprite_setScale(rat, scale);
    sfSprite_setPosition(rat, pos);
    set_sprite_origin(rat, rect);
}

void move_rat(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f pos = sfSprite_getPosition(rat->sprite);

    if (game->event->event->key.code == game->keys->move_left)
        move_rat_left(game, pos, rat->sprite, rat->speed);
    if (game->event->event->key.code == game->keys->move_right)
        move_rat_right(game, pos, rat->sprite, rat->speed);
    if (game->event->event->key.code == game->keys->move_up)
        move_rat_up(game, pos, rat->sprite, rat->speed);
    if (game->event->event->key.code == game->keys->move_down)
        move_rat_down(game, pos, rat->sprite, rat->speed);
}