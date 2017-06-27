#include "MainMenu.h"
#include "RandomGame.h"
#include "../../Controller/StateController.h"



namespace State
{
    MainMenu::MainMenu(sf::RenderWindow& window, Controller::StateController& sc)
    : BaseState(window, sc),
    button(*stateController, "Play Game!", Hack)
    {
      button.setPosition(10, 10);
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
          stateController->pushState(std::make_unique<RandomGame>(*win, *stateController, 50));
          return;
        }
      }
      win->clear();
      win->draw(button);
      win->display();
    }
}
