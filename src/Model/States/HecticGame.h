#pragma once

#include <vector>
#include "BaseState.h"
#include "../Utility/RandomGen.h"
#include <chrono>

namespace State
{
  class HecticGame : public BaseState
  {
    private:
      double count;
      std::chrono::time_point<std::chrono::system_clock> start = std::chrono::system_clock::now();
      sf::Vector2f targetSize = {50, 50};
      std::vector<sf::RectangleShape> buttons;
      Utility::RandomGen rnd;
    public:
      HecticGame(std::shared_ptr<Controller::StateController> sc);
      virtual ~HecticGame() final;
      void playGame();
  };
}
