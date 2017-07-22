#include "MainMenu.h"
#include "RandomGame.h"
#include "../../Controller/StateController.h"
#include <iostream>


namespace State
{
    MainMenu::MainMenu(Controller::StateController& sc)
    : BaseState(sc),
    button(*stateController, "Play Game!", Hack)
    {
      button.setPosition(stateController->getWin().getSize().x/2, stateController->getWin().getSize().y/2);
    }

    void MainMenu::playGame()
    {
      sf::Event event;
      while (stateController->getWin().pollEvent(event))
      {
        if (event.type == sf::Event::Closed)
        {
          stateController->getWin().close();
        }
        if(objectClicked(event, button))
        {
          std::cout << "Yay" << '\n';
          stateController->pushState(std::make_unique<RandomGame>(*stateController, 50));
          return;
        }
      }
      stateController->getWin().clear();
      stateController->getWin().draw(button);
      stateController->getWin().display();
    }
}
