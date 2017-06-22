#ifndef BASE_STATE_H
#define BASE_STATE_H

#include <SFML/Graphics.hpp>

namespace State
{
  class BaseState
  {
    protected:
      sf::RenderWindow* win;

    public:
      BaseState(sf::RenderWindow& window);
      virtual void playGame();
      bool objectClicked(const sf::Event& event, sf::Shape& shape);

  };
}

#endif /* end of include guard: BASE_STATE_H */
