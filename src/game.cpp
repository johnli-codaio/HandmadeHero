#include "game.h"
#include "graphics.h"
#include <SDL.h>

Game::Game() {
  if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {

  }
  Graphics graphics;
}

Game::~Game() {
  SDL_Quit();
}

void Game::HandleEvent(SDL_Event * event) {

}
