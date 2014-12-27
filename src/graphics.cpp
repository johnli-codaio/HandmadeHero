#include "graphics.h"
#include <SDL.h>

namespace {
  const int kScreenWidth = 640;
  const int kScreenHeight = 480;
}

Graphics::Graphics() {
  game_window = SDL_CreateWindow("Handmade Hero",
                             SDL_WINDOWPOS_UNDEFINED,
                             SDL_WINDOWPOS_UNDEFINED,
                             kScreenWidth, kScreenHeight,
                             SDL_WINDOW_RESIZABLE);
}

Graphics::~Graphics() {

}

SDL_Window * Graphics::returnWindow() {
   return game_window;
}
