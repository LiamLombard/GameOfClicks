#include "BaseState.h"
#include "RandomGame.h"
#include "../../Controller/StateController.h"

namespace State
{
  RandomGame::RandomGame(Controller::StateController& sc, int size)
  : BaseState (sc),
  rect(sf::Vector2f(size, size)),
  rnd(getWin().getSize(), rect.getSize())
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
        rect.setPosition(rnd.getRandomCoord());
      }
    }

    getWin().clear();
    getWin().draw(rect);
    getWin().display();
  }

}
