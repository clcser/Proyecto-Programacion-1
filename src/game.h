#ifndef GAME_H
#define GAME_H

#include "duck.h"
#include "pipeline.h"
#include "background.h"
#include "audio.h"

extern int running,count,separation_y;

typedef struct {
    SDL_Surface *image;
    SDL_Rect position;
} Game_over;

typedef struct {
    Duck duck;
    int costume;
    Background background;
    int scenery;
    Pipeline pipeline[PIPE_NUMBER];
    SDL_Surface *screen_surface;
    Music music;
} Game;


Game Game_new();

void Game_draw(Game game, int costume, int scenery);

int Game_update_state(Game *game);

int Game_manage_collisions(Duck *duck, Pipeline *pipeline);

void Game_delete(Game game);

#endif //GAME_H
