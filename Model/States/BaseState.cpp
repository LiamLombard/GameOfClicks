#include "BaseState.h"
#include <iostream>

namespace State
{
  BaseState::BaseState(Controller::StateController& sc)
  : stateController(&sc)
  {

  }

void BaseState::playGame()
{

}

  bool BaseState::objectClicked(const sf::Event& event, sf::Shape& shape)
  {
    if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
    {
      return shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y);
    }
    return false;
  }

  bool BaseState::objectClicked(const sf::Event& event, UI::Button& shape)
  {
    return objectClicked(event, shape.getBackGround());
  }

}
