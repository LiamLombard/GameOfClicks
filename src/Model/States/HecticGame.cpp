#include "HecticGame.h"
#include "../../Controller/StateController.h"

namespace State
{
  HecticGame::HecticGame(Controller::StateController& sc)
  : BaseState(sc),
  count(0),
  rnd(getWin().getSize(), targetSize)
  {
    sf::RectangleShape rect(sf::Vector2f(targetSize.x, targetSize.y));
    rect.setPosition((getWin().getSize().x-targetSize.x)/2, (getWin().getSize().y-targetSize.y)/2);
    buttons.push_back(rect);
  }

  void HecticGame::playGame()
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
      
      int index = -1;
      for(unsigned int i = 0; i < buttons.size(); i++)
      {
        if(objectClicked(event, buttons[i]))
        {
          index = i;
          break;
        }
      }
      if (index != -1)
      {
        buttons.erase(buttons.begin()+index);
      }
    }

    std::chrono::duration<double> duration = std::chrono::system_clock::now() - start;

    if(duration.count() > count)
    {
      count += 0.5;
      sf::RectangleShape rect(sf::Vector2f(targetSize.x, targetSize.y));
      rect.setPosition(rnd.getRandomCoord());
      buttons.push_back(rect);
    }

    getWin().clear();
    for(sf::RectangleShape btn: buttons)
    {
      getWin().draw(btn);
    }
    getWin().display();
  }
}
