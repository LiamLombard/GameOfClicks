#include "BaseState.h"
#include "RandomGame.h"
#include "../../Controller/StateController.h"

namespace State
{
  RandomGame::RandomGame(sf::RenderWindow& window, Controller::StateController& sc, int size)
  : BaseState (window, sc),
  rect(sf::Vector2f(size, size)),
  randWidth(0,window.getSize().x-size),
  randHeight(0,window.getSize().y-size)
  {
    rect.setPosition((window.getSize().x-size)/2, (window.getSize().y-size)/2);
  }

  void RandomGame::playGame()
  {
    sf::Event event;
    while (win->pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
      {
        win->close();
      }
      if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
      {
        stateController->popState();
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
