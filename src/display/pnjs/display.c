/*
** EPITECH PROJECT, 2022
** display_pnj
** File description:
** display
*/

#include "rpg.h"

void display_pnj(game_t *game, pnj_t *pnj)
{
    if (!pnj || !game || !pnj->sprite)
        return;
    check_pnj_intersects(game);
    sfRenderWindow_drawSprite(game->window, pnj->sprite, NULL);
    if (pnj->display_the_text == true) {
        if (pnj->text_to_display[pnj->text_index_display])
            sfRenderWindow_drawText(game->window, pnj->text_to_display[pnj->text_index_display], NULL);
    }
}
