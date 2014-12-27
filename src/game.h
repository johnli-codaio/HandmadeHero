#ifndef GAME_H_
#define GAME_H_

union SDL_Event;
struct SDL_Window;

struct Game {
  Game();
  ~Game();

  private:
    bool HandleEvent(SDL_Event * event);
    void eventLoop();
    void renderWindow(SDL_Window * window);
  };
#endif // GAME_H_
