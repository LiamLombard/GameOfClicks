#pragma once

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
