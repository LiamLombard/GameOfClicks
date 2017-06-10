#include "../include/Display.h"
#include "../include/Game_State.h"
#include <memory>
#include <SFML/Graphics.hpp>

namespace Display
{
  std::unique_ptr<sf::RenderWindow> window;

  void init()
  {
    window = std::make_unique<sf::RenderWindow>(sf::VideoMode(WIDTH, HEIGHT), "Game of Clicks", sf::Style::Close);
  }

  void close()
  {
    window->close();
  }

  void clear()
  {
    window->clear();
  }

  void update()
  {
    window->display();
  }

  void draw(const sf::Drawable& drawable)
  {
    window->draw(drawable);
  }

  void checkForClose(const sf::Event& e)
  {
    if(e.type == sf::Event::Closed)
    {
      close();
    }
  }

  void pollEvents(State::Game_State& gameState)
  {
    sf::Event e;
    while (window->pollEvent(e))
    {
        gameState.input(e);
        checkForClose(e);
    }
  }

  bool isOpen()
  {
    return window->isOpen();
  }
}
