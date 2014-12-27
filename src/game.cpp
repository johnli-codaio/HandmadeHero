#include "game.h"
#include "graphics.h"
#include <SDL.h>

Game::Game() {
  if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {

  }
  SDL_Init(SDL_INIT_EVERYTHING);
  Graphics graphics;
  renderWindow(graphics.returnWindow());
}

Game::~Game() {
  SDL_Quit();
}

bool Game::HandleEvent(SDL_Event * event) {
/*
 * This method will handle any event that occurs for this window.
 * It takes in an event and uses switch/case statements to determine
 * how to handle the event 
*/

  bool shouldQuit = false;
  switch(event->type) {

    case SDL_QUIT: {
       printf("SDL_QUIT\n");
       shouldQuit = true;
    } break;

    case SDL_WINDOWEVENT: {
      switch(event->window.event) {

        case SDL_WINDOWEVENT_RESIZED: {
          printf("SDL_WINDOWEVENT_RESIZED (%d, %d)\n", event->window.data1,
                event->window.data2); // data1 and data2 represent width and 
                                      // height respectively.  
        } break;

        case SDL_WINDOWEVENT_FOCUS_GAINED: {
          printf("SDL_WINDOWEVENT_FOCUS_GAINED\n");
        } break;

        case SDL_WINDOWEVENT_EXPOSED: {
          SDL_Window * Window = SDL_GetWindowFromID(event->window.windowID);
          SDL_Renderer * renderer = SDL_GetRenderer(Window);
          static bool isWhite = true;
          if (isWhite == true) {
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
            isWhite = false;
          } else {
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            isWhite = true;
          }

          SDL_RenderClear(renderer);
          SDL_RenderPresent(renderer);
        } break;
      }
    }
  }
  return shouldQuit;  
}

void Game::eventLoop() {
/*
 * This function will endlessly handle the events until SDL_Quit occurs.
 */
  while(true) {
    SDL_Event event;
    SDL_WaitEvent(&event);
    if(HandleEvent(&event))
      break;
  }
}

void Game::renderWindow(SDL_Window * window) {
  if(window) {
    SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);
    if(renderer) {
      eventLoop();
    }
    else {
    }
  } else {
  }
}
