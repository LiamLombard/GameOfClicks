#pragma once

#include <SFML/Graphics.hpp>

class Application;

namespace State
{
  class Game_State
  {
    public:
      Game_State(Application& application);

      bool objectClicked(sf::Event event, sf::Vector2f position, sf::Shape& entity);

      virtual void input() = 0;
      virtual void update() = 0;
      virtual void draw() = 0;

    protected:
      Application* m_application;
  };
}
