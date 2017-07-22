#ifndef RANDOM_GAME_H
#define RANDOM_GAME_H

#include <random>
#include "BaseState.h"

namespace State
{
  class RandomGame : public BaseState
  {
    private:
      sf::RectangleShape rect;
      std::default_random_engine gen;
      std::uniform_int_distribution<int> randWidth;
      std::uniform_int_distribution<int> randHeight;

    public:
      RandomGame(Controller::StateController& sc, int size);
      void playGame();

  };
}

#endif /* end of include guard: RANDOM_GAME_H */
