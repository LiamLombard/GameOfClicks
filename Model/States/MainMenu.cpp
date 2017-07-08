#include "MainMenu.h"
#include "RandomGame.h"
#include "../../Controller/StateController.h"
#include <iostream>


namespace State
{
    MainMenu::MainMenu(sf::RenderWindow& window, Controller::StateController& sc)
    : BaseState(window, sc),
    button(*stateController, "Play Game!", Hack)
    {
      button.setPosition(win->getSize().x/2, win->getSize().y/2);
    }

    void MainMenu::playGame()
    {
      sf::Event event;
      while (win->pollEvent(event))
      {
        if (event.type == sf::Event::Closed)
        {
          win->close();
        }
        if(objectClicked(event, button))
        {
          std::cout << "Yay" << '\n';
          stateController->pushState(std::make_unique<RandomGame>(*win, *stateController, 50));
          return;
        }
      }
      win->clear();
      win->draw(button);
      win->display();
    }
}
