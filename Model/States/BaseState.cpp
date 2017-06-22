#include "BaseState.h"

namespace State
{
  BaseState::BaseState(sf::RenderWindow& window)
  {
    win = &window;
  }

  bool BaseState::objectClicked(const sf::Event& event, sf::Shape& shape)
  {
    if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
    {
      return shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y);
    }
    return false;
  }

}
