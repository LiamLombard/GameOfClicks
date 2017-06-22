#ifndef BASE_STATE_H
#define BASE_STATE_H

#include <SFML/Graphics.hpp>

namespace sf
{
  class RenderWindow;
}

namespace State
{
  class BaseState
  {
    protected:
      sf::RenderWindow* win;

    public:
      BaseState(sf::RenderWindow& window);
      virtual void playGame() = 0;
      bool objectClicked(const sf::Event& event, sf::Shape& shape);

  };
}

#endif /* end of include guard: BASE_STATE_H */
