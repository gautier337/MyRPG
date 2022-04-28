/*
** EPITECH PROJECT, 2022
** init_pnj_struct
** File description:
** init_pnj
*/

#include "rpg.h"

void create_box_message(game_t *game, pnj_t *pnj, sfVector2f position)
{
    position.y -= 200;
    position.x -= 210;
    pnj->message_box =
        create_sprite(game->textures->message_box,
        (sfIntRect){0, 560, 320, 80}, position, (sfVector2f){1.2, 1});
    set_sprite_origin(pnj->message_box, (sfIntRect){0, 560, 320, 80});
}

void init_settings_base(pnj_t *pnj)
{
    int random = 0;
    int n = 0;

    pnj->display_the_text = false;
    pnj->text_index_display = 0;
    pnj->timer_display_text = sfClock_create();
    pnj->timer_move = sfClock_create();
    pnj->walk = sfClock_create();
    pnj->text = true;
    pnj->display_the_text = 0;
}

void init_pnj(pnj_t *pnj, sfTexture *texture, sfVector2f pos, sfIntRect rect)
{
    pnj->sprite = create_sprite(texture,
        rect, pos, (sfVector2f){0.42, 0.42});
    set_sprite_origin(pnj->sprite, rect);
    pnj->touch_talk = create_text(FONT_TEXT_PNJ, sfWhite, 25, "0");
    set_text_origin(pnj->touch_talk);
    sfText_setPosition(pnj->touch_talk, (sfVector2f){pos.x, pos.y - 45});
    init_settings_base(pnj);
    pnj->circle = create_circle_shape(sfRed, (sfVector2f){0, 0}, 35, sfRed);
    sfCircleShape_setOrigin(pnj->circle, (sfVector2f){35, 35});
}

void init_struct_pnjs(game_t *game)
{
    assets_t *assets = game->assets;

    if (!game)
        return;
    assets->pnj = malloc(sizeof(pnj_t *) * PNJ_NBR + 1);
    for (int i = 0; i < PNJ_NBR; i++) {
        assets->pnj[i] = malloc(sizeof(pnj_t));
    }
    assets->pnj[PNJ_NBR] = NULL;

    init_one(game);
    init_two(game);
    init_three(game);
    init_pnj_guard_left(game);
    init_pnj_guard_right(game);
    init_pnj_museum_hotess(game);
    init_pnj_g_museum_left(game);
    init_pnj_g_museum_right(game);
    citizens_png(game);
}
