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
      sf::Vector2f mousePos(event.mouseButton.x, event.mouseButton.y);
      if(entity.getGlobalBounds().contains(mousePos))
      {
          return true;
      }
    }
    return false;
  }

  bool Game_State::misClicked(sf::Event event, sf::Vector2f position, sf::Shape& entity)
  {
    if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
    {
      sf::Vector2f mousePos(event.mouseButton.x, event.mouseButton.y);
      if(!entity.getGlobalBounds().contains(mousePos))
      {
          return true;
      }
    }
    return false;
  }
}
