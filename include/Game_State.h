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
      bool misClicked(sf::Event event, sf::Vector2f position, sf::Shape& entity);

      virtual void input (const sf::Event& e) = 0;
      virtual void update(float dt) = 0;
      virtual void draw() = 0;

    protected:
      Application* m_application;
  };
}
