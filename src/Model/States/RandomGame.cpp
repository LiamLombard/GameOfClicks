#include "BaseState.h"
#include "RandomGame.h"
#include "../../Controller/StateController.h"

namespace State
{
  RandomGame::RandomGame(std::shared_ptr<Controller::StateController> sc, float size)
  : BaseState (sc),
  rect(sf::Vector2f(size, size)),
  rnd(getWin().getSize(), rect.getSize())
  {
    rect.setPosition((static_cast<float>(getWin().getSize().x)-size)/2, (static_cast<float>(getWin().getSize().y)-size)/2);
  }

  RandomGame::~RandomGame()
  {
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
