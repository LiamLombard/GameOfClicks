#ifndef RANDOM_GAME_H
#define RANDOM_GAME_H

#include "BaseState.h"
// #include <vector>
#include <SFML/Graphics.hpp>

namespace State
{
  class RandomGame : public BaseState
  {
    public:
      RandomGame(ScreenManager& sm);
      void processInput(const sf::Event& e);
      sf::RectangleShape& draw();
      void update();
      bool objectClicked(const sf::Event& event, const sf::Shape& entity);

    private:
      sf::RectangleShape square;
  };
}

#endif /* end of include guard: RANDOM_GAME_H */
