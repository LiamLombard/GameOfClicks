#ifndef HECTIC_GAME
#define HECTIC_GAME

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
      HecticGame(Controller::StateController& sc);
      void playGame();
  };
}

#endif /* end of include guard: HECTIC_GAME */
