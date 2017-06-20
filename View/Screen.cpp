#include "Screen.h"
#include <SFML/Graphics.hpp>

namespace Screen
{
  Screen::Screen()
  {
    window = std::make_unique<sf::RenderWindow>();
  }

  void Screen::init()
  {
    window->create(sf::VideoMode(WIDTH, HEIGHT), "Game of Clicks", sf::Style::Close);
  }


  void Screen::clear(const sf::Color& colour)
  {
    window->clear(colour);
  }

  bool Screen::isOpen()
  {
    return window->isOpen();
  }

  void Screen::update()
  {
    window->display();
  }

  void Screen::checkForClose(const sf::Event& e)
  {
    if (e.type == sf::Event::Closed)
    {
      window->close();
    }
  }

  void Screen::pollEvents()
  {
    sf::Event e;
    while (window->pollEvent(e))
    {
      checkForClose(e);
    }
  }

  void Screen::draw(const sf::Drawable& drawable)
  {
    window->draw(drawable);
  }

}
