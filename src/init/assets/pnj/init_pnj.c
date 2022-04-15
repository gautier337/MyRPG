/*
** EPITECH PROJECT, 2022
** init_pnj_struct
** File description:
** init_pnj
*/

#include "rpg.h"

void init_text_pnj(pnj_t *pnj, sfVector2f pos, char *first_message)
{
    int nbr_text = 2;

    pnj->text_to_display = malloc(sizeof(sfText *) * nbr_text);
    pnj->text_to_display[nbr_text] = NULL;
    pnj->text_to_display[0] = create_text(FONT_TEXT_PNJ, sfWhite,
        15, first_message);
    pnj->text_to_display[1] = create_text(FONT_TEXT_PNJ, sfWhite,
        15, "You are a fucking rat");
    pos.y -= 25;
    pos.x -= 185;
    for (int i = 0; pnj->text_to_display[i] != NULL; i++) {
        set_text_origin_middle_left(pnj->text_to_display[i]);
        sfText_setPosition(pnj->text_to_display[i], pos);
    }
}

void init_settings_base(pnj_t *pnj, float time_between_text)
{
    int random = 0;
    int n = 0;

    pnj->time_between_text = time_between_text;
    pnj->display_the_text = false;
    pnj->text_index_display = 0;
    pnj->timer_display_text = sfClock_create();
    pnj->timer_move = sfClock_create();
    pnj->walk = sfClock_create();
    pnj->text = true;
}

void init_pnj(game_t *game, pnj_t *pnj, sfTexture *texture, sfVector2f pos)
{
    pnj->sprite = create_sprite(texture,
        (sfIntRect){0, 30, 45, 65}, pos, (sfVector2f){0.42, 0.42});
    set_sprite_origin(pnj->sprite, (sfIntRect){0, 30, 45, 65});
    pos.y -= 200;
    pos.x -= 210;
    pnj->message_box = create_sprite(game->textures->message_box,
        (sfIntRect){0, 560, 320, 80}, pos, (sfVector2f){1.2, 1});
    set_sprite_origin(pnj->message_box, (sfIntRect){0, 560, 320, 80});
    init_text_pnj(pnj, pos, "un deux trois soleil");
    init_settings_base(pnj, 5);
}

void init_struct_pnjs(game_t *game)
{
    assets_t *assets = game->assets;

    if (!game)
        return;
    assets->pnj = malloc(sizeof(pnj_t *) * PNJ_NBR + 1);
    for (int i = 0; i < PNJ_NBR; i++)
        assets->pnj[i] = malloc(sizeof(pnj_t));
    assets->pnj[PNJ_NBR] = NULL;
    init_pnj(game, assets->pnj[PNJ_BLACK],
        game->textures->black_pnj, (sfVector2f){2324, 1900});
    init_pnj(game, assets->pnj[PNJ_BLACK_TWO],
        game->textures->black_pnj, (sfVector2f){2280, 1900});
    init_pnj(game, assets->pnj[PNJ_BLACK_THREE],
        game->textures->black_pnj, (sfVector2f){2400, 1900});
    citizens_png(game);
}