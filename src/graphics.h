#ifndef GRAPHICS_H_
#define GRAPHICS_H_

struct SDL_Window;

struct Graphics {
  Graphics();
  ~Graphics();
  SDL_Window * returnWindow();
  SDL_Window * game_window;
};

#endif // GRAPHICS_H_
