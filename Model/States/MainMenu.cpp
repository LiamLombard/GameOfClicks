#include "MainMenu.h"
#include "RandomGame.h"
#include "../../Controller/StateController.h"


namespace State
{
    MainMenu::MainMenu(sf::RenderWindow& window, Controller::StateController& sc)
    : BaseState(window, sc),
    mainButton(sf::Vector2f(100, 20))
    {
      mainButton.setPosition(0, 0);
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
        if(objectClicked(event, mainButton))
        {
          stateController->pushState(std::make_unique<RandomGame>(*win, *stateController, 50));
          return;
        }
      }
      win->clear();
      win->draw(mainButton);
      win->display();
    }
}
