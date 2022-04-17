/*
** EPITECH PROJECT, 2022
** Language Abilities Spanish Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

const char *spanish_abilities_texts_language[] = {
    "Kick",
    "Sell for 10% more",
    "Sell for 20% more",
    "Sell for 30% more",
    "Sell for 40% more",
    "Sell for 50% more",
    "Can buy item",
    "Run 30% faster",
    "Run 40% faster",
    "Run 50% faster",
    "Sell for 100% more and\n      run 100% faster",
    "Reduces detection range by 10%",
    "   Can wield   \n1 illegal object",
    "   20% more  \nescape chance",
    "   40% more  \nescape chance",
    "   60% more  \nescape chance",
    "Reduce detection\n  range by 20%  ",
    "Can dodge",
    "    Can wield    \n2 illegals objects",
    "Reduce detection\n  range by 40%  ",
    "Can become a cardboard",
    "Can bite",
    "20% more HP",
    "30% more HP",
    "40% more HP",
    "5% more damage",
    "Can use weapons",
    "10% more damage",
    "Bite and kick deal 30% more damage",
    "50% more HP and 20% more damage",
    NULL
};

void set_texts_spanish_abilities_menu(game_t *game)
{
    abilities_menu_t *menu = game->abilities->menu;

    sfText_setString(menu->title, SPANISH_ABILITIES);
    sfText_setString(menu->title_utility, SPANISH_UTILITY);
    sfText_setString(menu->title_stealth, SPANISH_STEALTH);
    sfText_setString(menu->title_fight, SPANISH_FIGHT);
}

void set_texts_spanish_abilities(game_t *game)
{
    set_texts_spanish_abilities_menu(game);
    for (int idx = 0; game->abilities->ability[idx] != NULL; idx += 1)
        sfText_setString(game->abilities->ability[idx]->text,
            spanish_abilities_texts_language[idx]);
}
