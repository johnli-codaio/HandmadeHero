#include "graphics.h"
#include <SDL.h>

namespace {
  const int kScreenWidth = 640;
  const int kScreenHeight = 480;
}

Graphics::Graphics() {
  SDL_Window *Window;
  Window = SDL_CreateWindow("Handmade Hero",
                             SDL_WINDOWPOS_UNDEFINED,
                             SDL_WINDOWPOS_UNDEFINED,
                             kScreenWidth, kScreenHeight,
                             SDL_WINDOW_RESIZABLE);
  SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "Handmade Hero",
                            "This is Handmade Hero", 0);                    
}

Graphics::~Graphics() {

}
