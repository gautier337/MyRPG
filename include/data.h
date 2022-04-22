/*
** EPITECH PROJECT, 2022
** Data Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef DATA_H_
    #define DATA_H_

    #include "rpg.h"
    #include "inventory.h"
    #include "pnj.h"

    typedef struct parallax {
        sfSprite *bg0;
        sfSprite *bg1;
        sfSprite *bg2;
        sfSprite *bg3;
        sfClock *clock;
    } parallax_t;

    typedef struct appartment {
        sfSprite *bg;
        sfSprite *bg_top;
        sfImage *hitbox;
    } appartment_t;

    typedef struct museum {
        sfSprite *bg;
        sfSprite *bg_top;
        sfImage *hitbox;
        int curent_room;
    } museum_t;

    typedef struct ice {
        sfSprite *bg;
        sfImage *hitbox;
    } ice_t;

    typedef struct market {
        sfSprite *bg;
        sfImage *hitbox;
    } market_t;

    typedef struct clothe {
        sfSprite *bg;
        sfImage *hitbox;
    } clothe_t;

    typedef struct doors {
        sfSprite *rat;
        int rat_is_taken;
        sfClock *clock;
        sfClock *animation;
    } doors_t;

    typedef struct city {
        sfSprite *bg;
        sfSprite *bg_top;
        doors_t *doors;
        sfImage *hitbox;
    } city_t;

    typedef struct game_menu {
        sfSprite *bg;
        sfClock *clock;
    } game_menu_t;

    typedef struct home_menu {
        parallax_t *parallax;
        sfSprite **quit;
        sfSprite **options;
        sfSprite *title;
        sfText *press;
        int quit_state;
        int options_state;
        sfClock *button_clock;
    } home_menu_t;

    typedef struct howtoplay {
        sfSprite *bg;
        sfClock *clock;
    } howtoplay_t;

    typedef struct rat {
        sfSprite *idle_front;
        sfSprite *idle_back;
        sfSprite *idle_left;
        sfSprite *idle_right;
        sfSprite *idle_back_left;
        sfSprite *idle_back_right;
        sfSprite *movement_up;
        sfSprite *movement_down;
        sfSprite *movement_left;
        sfSprite *movement_right;
        sfSprite *movement_up_left;
        sfSprite *movement_up_right;
        sfSprite *dodge_up;
        sfSprite *dodge_down;
        sfSprite *dodge_left;
        sfSprite *dodge_right;
        sfSprite *dodge_up_left;
        sfSprite *dodge_up_right;
        sfSprite *shadow;
        sfCircleShape *circle;
        sfClock *idle_anim_clock;
        sfClock *movement_anim_clock;
        sfClock *dodge_anim_clock;
        sfClock *movement_clock;
        sfClock *latency_status_clock;
        int up;
        int down;
        int left;
        int right;
        int speed;
        int is_moving;
        int is_dodging;
        float radius_circle;
    } rat_t;

    typedef struct settings_game {
        sfSprite *arrow_language_right;
        sfSprite *arrow_language_left;
        sfText *title_language;
        sfText *language;
    } settings_game_t;

    typedef struct settings_graphics {
        sfText *title_res;
        sfText **res;
        sfSprite *res_left;
        sfSprite *res_right;
        sfText *title_fps;
        sfText **fps;
        sfSprite *fps_left;
        sfSprite *fps_right;
        sfText *title_vsync;
        sfText **vsync;
        sfSprite *vsync_left;
        sfSprite *vsync_right;
    } settings_graphics_t;

    typedef struct settings_audio {
        sfText *title_music;
        sfSprite *music_left;
        sfSprite *music_right;
        sfSprite *music_empty_bar;
        sfSprite *music_circle_bar;
        sfSprite **music_bar;
        sfText *title_effects;
        sfSprite *effects_left;
        sfSprite *effects_right;
        sfSprite *effects_empty_bar;
        sfSprite *effects_circle_bar;
        sfSprite **effects_bar;
    } settings_audio_t;

    typedef struct settings_choose_key {
        sfSprite *bg_rect;
        sfText *text;
        sfText *quit;
    } settings_choose_key_t;

    typedef struct settings_key {
        sfText *title;
        sfSprite *key_rect;
        sfText *key;
        sfSprite *reset;
    } settings_key_t;

    enum keys_name {
        UP,
        DOWN,
        LEFT,
        RIGHT,
        JUMP,
        DODGE,
        ATTACK,
        INTERACT,
        ZOOM_IN,
        ZOOM_OUT,
        ROTATE_LEFT,
        ROTATE_RIGHT,
        RESET_VIEW,
        ESCAPE,
        HITBOX,
        NB_KEYS
    };

    typedef struct settings_controls {
        settings_choose_key_t *choose_key;
        sfSprite *scrolling_bar;
        sfSprite *scrolling_bar_inside;
        settings_key_t **keys;
        settings_key_t *up;
        settings_key_t *down;
        settings_key_t *left;
        settings_key_t *right;
        settings_key_t *jump;
        settings_key_t *dodge;
        settings_key_t *attack;
        settings_key_t *interact;
        settings_key_t *zoom_in;
        settings_key_t *zoom_out;
        settings_key_t *rotate_left;
        settings_key_t *rotate_right;
        settings_key_t *reset_view;
        settings_key_t *hitbox;
        settings_key_t *escape;
        sfClock *scrolling_clock;
        sfClock *clock;
        int key_selected;
    } settings_controls_t;

    typedef struct settings {
        sfSprite *bg;
        sfSprite *scrolling_rect;
        sfText *settings_text;
        sfText *game_text;
        sfText *graphics_text;
        sfText *audio_text;
        sfText *controls_text;
        settings_game_t *game;
        settings_graphics_t *graphics;
        settings_audio_t *audio;
        settings_controls_t *controls;
        sfClock *clock;
        int current;
    } settings_t;

    typedef struct wallet {
        sfSprite *logo;
        sfText *title;
        sfText *value;
    } wallet_t;

    typedef struct stat_data {
        sfText *title;
        sfText *value;
    } stat_data_t;

    typedef struct stats {
        sfSprite *bg;
        sfText *stats;
        sfSprite *frame;
        wallet_t *money;
        wallet_t *xp;
        wallet_t *abilities;
        stat_data_t *time_played;
        stat_data_t *fights;
        stat_data_t *money_saved;
        stat_data_t *stolen_items;
        sfClock *clock;
    } stats_t;

    typedef struct transitions {
        sfSprite *rat_enter;
        sfSprite *rat_quit;
    } transitions_t;

    typedef struct top_bar {
        sfText *game;
        sfText *abilities;
        sfText *stats;
        sfText *howtoplay;
        sfSprite *settings_off;
        sfSprite *settings_on;
        sfSprite *quit_off;
        sfSprite *quit_on;
        sfSprite *dot;
        sfClock *clock;
    } top_bar_t;

    typedef struct assets {
        sfSprite *cursor;
        abilities_t *abilities;
        appartment_t *appartment;
        game_menu_t *game_menu;
        howtoplay_t *howtoplay;
        museum_t *museum;
        ice_t *ice;
        market_t *market;
        clothe_t *clothe;
        city_t *city;
        home_menu_t *home_menu;
        rat_t *rat;
        pnj_t **pnj;
        settings_t *settings;
        stats_t *stats;
        transitions_t *transitions;
        top_bar_t *top_bar;
    } assets_t;

    typedef struct event {
        sfEvent *event;
        sfSound *click;
    } event_t;

    typedef struct musics {
        sfMusic *rat_transition;
        sfMusic *music_menu;
        sfMusic *music_city;
    } musics_t;

    typedef struct sounds {
        sfSound *jump_sound;
    } sounds_t;

    typedef struct audio {
        musics_t *musics;
        sounds_t *sounds;
    } audio_t;

    typedef struct textures {
        sfTexture *black_pnj;
        sfTexture *blue_girl_pnj;
        sfTexture *rat_blue;
        sfTexture *rat_green;
        sfTexture *rat_purple;
        sfTexture *rat_red;
        sfTexture *apart_top;
        sfTexture *apart;
        sfTexture *city_view;
        sfTexture *city_view_top;
        sfTexture *city_rat_door;
        sfTexture *clothe_view;
        sfTexture *ice_cream_view;
        sfTexture *market_view;
        sfTexture *museum_bg;
        sfTexture *museum_bg_top;
        sfTexture *cursor_icon;
        sfTexture *window_icon;
        sfTexture *slot_off;
        sfTexture *slot_on;
        sfTexture *home_menu_bg0;
        sfTexture *home_menu_bg1;
        sfTexture *home_menu_bg2;
        sfTexture *home_menu_bg3;
        sfTexture *home_menu_title;
        sfTexture *abilities_bg;
        sfTexture *settings_bg;
        sfTexture *transition_enter;
        sfTexture *transition_quit;
        sfTexture *menu_bg;
        sfTexture *buttons_1;
        sfTexture *gui;
        sfTexture *message_box;
    } textures_t;

    typedef struct save {
        int nb_golds;
        int nb_xps;
        int nb_abilities;
        int *abilities;
    } save_t;

    typedef struct data {
        save_t *save1;
        save_t *save2;
        save_t *save3;
    } data_t;

    typedef struct game {
        sfRenderWindow *window;
        sfView *view;
        data_t *data;
        textures_t *textures;
        event_t *event;
        assets_t *assets;
        audio_t *audio;
        int *keys;
        int *default_keys;
        inventory_t *inventory;
        abilities_t *abilities;
        int stage;
        int last_stage;
        int next_stage;
        int fps;
        int res;
        int vsync;
        int language;
        int music_volume;
        int effects_volume;
        int nb_golds;
        int nb_xps;
        int nb_abilities;
    } game_t;

#endif /* !DATA_H_ */
