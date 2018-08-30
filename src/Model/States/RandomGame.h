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
      RandomGame(std::shared_ptr<Controller::StateController> sc, float size);
      virtual ~RandomGame() final;
      void playGame();

  };
}
