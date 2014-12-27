#ifndef GAME_H_
#define GAME_H_

union SDL_Event;

struct Game {
  Game();
  ~Game();

  private:
    void HandleEvent(SDL_Event * event);
  };
#endif // GAME_H_
