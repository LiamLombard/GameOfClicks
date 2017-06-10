#include "../include/Display.h"

#include <memory>
#include <SFML/Graphics.hpp>

namespace Display
{
  std::unique_ptr<sf::RenderWindow> window;

  void init()
  {
    window = std::make_unique<sf::RenderWindow>(sf::VideoMode(WIDTH, HEIGHT), "Game o' Clicks", sf::Style::Close);
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

  void checkForClose()
  {
    sf::Event e;
    while(window->pollEvent(e))
    {
      if(e.type == sf::Event::Closed)
      {
        close();
      }
    }
  }

  bool isOpen()
  {
    return window->isOpen();
  }
}
