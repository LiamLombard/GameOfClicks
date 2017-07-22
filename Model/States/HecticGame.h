#ifndef HECTIC_GAME
#define HECTIC_GAME

#include <vector>
#include "BaseState.h"

namespace State
{
  class HecticGame : public BaseState
  {
    private:
      sf::Vector2f targetSize = {50, 50};
      std::vector<sf::RectangleShape> buttons;
    public:
      HecticGame(Controller::StateController& sc);
      void playGame();
  };
}

#endif /* end of include guard: HECTIC_GAME */
