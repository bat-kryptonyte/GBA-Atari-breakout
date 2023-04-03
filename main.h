#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/
#define NUM_TILES 33

enum gba_state {
  START, 
  PLAY,
  WIN,
  LOSE,
};

enum gamestate {
  GS_INITBOUNCE,
  GS_BOUNCE
};

struct ball {
          int row;
          int col;
          int rd;
          int cd;
          unsigned short color;
  };

  struct player {
          int row;
          int col;
          int rd;
          int cd;
          const u16 *image;
          
  };

  struct g_target {
          int row;
          int col;
          const u16 *image;
          int width;
          int height;
          int hit;
  };

  struct state {
    enum gamestate gamestate;
    int size;
    struct ball balls;
  };

  struct player_state {
    int width;
    int height;
    struct player players;
  };

  struct target_state {
    struct g_target targets[NUM_TILES];
  };

#endif
