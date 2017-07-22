#ifndef RANDOM_GAME_H
#define RANDOM_GAME_H

#include "BaseState.h"
#include "../Utility/RandomGen.h"

namespace State
{
  class RandomGame : public BaseState
  {
    private:
      sf::RectangleShape rect;
      Utility::RandomGen rnd;

    public:
      RandomGame(Controller::StateController& sc, int size);
      void playGame();

  };
}

#endif /* end of include guard: RANDOM_GAME_H */
