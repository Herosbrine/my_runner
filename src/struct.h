/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** struct.h
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <time.h>
#include <stdlib.h>
#include <SFML/Audio.h>

struct texture_s {
    sfTexture *ttext1;
    sfTexture *ttext1a;
    sfTexture *ttext1aa;
    sfTexture *ttext1b;
    sfTexture *ttext1c;
    sfTexture *ttext1d;
    sfTexture *ttext2;
    sfTexture *ttext2a;
    sfTexture *ttext3a;
    sfTexture *ttext1e;
    sfTexture *ttext1f;
    sfTexture *ttext3;
    sfTexture *ttext4a;
    sfTexture *ttext10;
    sfTexture *ttext11;
    sfSoundBuffer *sbang;
    sfSound *bang;
    sfRenderWindow *window;
    sfTime time;
    sfClock *clock;
    sfEvent event;
};
typedef struct texture_s data_t;

struct sprite_s {
    sfSprite *stext1;
    sfSprite *stext1a;
    sfSprite *stext1aa;
    sfSprite *stext1b;
    sfSprite *stext1c;
    sfSprite *stext1d;
    sfSprite *stext2;
    sfSprite *stext2a;
    sfSprite *stext1e;
    sfSprite *stext1f;
    sfSprite *stext3a;
    sfSprite *stext3;
    sfSprite *stext4a;
    sfSprite *stext10;
    sfSprite *stext11;
    sfText *score_txt;
    sfText *score;
    sfFont *font;
    int change_score;
    int speed;
    int count;
    int count2;
    int score1;
    int x;
    int y;
    int z;
    int bol;
    int b;
    int c;
};
typedef struct sprite_s sprite_t;

//PROG
void destroy_item2(data_t *texture, sprite_t *sprite);
void destroy_item(data_t *texture, sprite_t *sprite);
void init_var4(data_t *texture, sprite_t *sprite);
void init_var3(data_t *texture, sprite_t *sprite);
void init_var2(data_t *texture, sprite_t *sprite);
void init_var(data_t *texture, sprite_t *sprite);
void lose_condition(data_t *texture, sprite_t *sprite);
void move_dino(data_t *texture, sprite_t *sprite);
void key_up(data_t *texture, sprite_t *sprite);
void key_down(data_t *texture, sprite_t *sprite);
void condition(sprite_t *sprite);
void game_loop(data_t *texture, sprite_t *sprite);
void my_runner(data_t *texture, sprite_t *sprite, sfEvent event);
void make_screen(data_t *texture, sprite_t *sprite);
long my_getnbr(char *str);
char *my_int_to_char(int nb);
int my_power(int x, int y);
int my_number_len(int nb);
int main();