#include "../include/Game_State.h"
#include <iostream>

namespace State
{
  Game_State::Game_State(Application& application) : m_application (&application)
  {

  }

  bool Game_State::objectClicked(sf::Event event, sf::Vector2f position, sf::Shape& entity)
  {
    if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
    {


      std::cout << "the left button was pressed" << std::endl;
      std::cout << "mouse x: " << event.mouseButton.x << std::endl;
      std::cout << "mouse y: " << event.mouseButton.y << std::endl;
      sf::Vector2f mousePos(event.mouseButton.x, event.mouseButton.y);
      if(entity.getGlobalBounds().contains(mousePos))
      {
          return true;
      }
    }
    return false;
  }
}
