#include "BaseState.h"
#include "RandomGame.h"
#include "../../Controller/StateController.h"

namespace State
{
  RandomGame::RandomGame(Controller::StateController& sc, int size)
  : BaseState (sc),
  rect(sf::Vector2f(size, size)),
  randWidth(0,getWin().getSize().x-size),
  randHeight(0,getWin().getSize().y-size)
  {
    rect.setPosition((getWin().getSize().x-size)/2, (getWin().getSize().y-size)/2);
  }

  void RandomGame::playGame()
  {
    sf::Event event;
    while (getWin().pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
      {
        getWin().close();
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

    getWin().clear();
    getWin().draw(rect);
    getWin().display();
  }

}
