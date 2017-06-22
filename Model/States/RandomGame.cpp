#include "BaseState.h"
#include "RandomGame.h"

namespace State
{
  RandomGame::RandomGame(sf::RenderWindow& window, Controller::StateController& sc, int size)
  : BaseState (window, sc),
  rect(sf::Vector2f(size, size)),
  randWidth(0,window.getSize().x-50),
  randHeight(0,window.getSize().y-size)
  {
    rect.setPosition(window.getSize().x/2-size, window.getSize().y/2-size);
  }

  void RandomGame::playGame()
  {
    while (win->isOpen())
    {
      sf::Event event;
      while (win->pollEvent(event))
      {
        if (event.type == sf::Event::Closed)
        {
          win->close();
        }
        if(objectClicked(event, rect))
        {
          rect.setPosition(randWidth(gen), randHeight(gen));
        }
      }

      win->clear();

      win->draw(rect);
      win->display();
    }
  }

}
