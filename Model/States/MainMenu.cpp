#include "MainMenu.h"
#include "HecticGame.h"



namespace State
{
    MainMenu::MainMenu(Controller::StateController& sc)
    : BaseState(sc),
    button(*stateController, "Play Game!", Hack)
    {
      button.setPosition(getWin().getSize().x/2, getWin().getSize().y/2);
    }

    void MainMenu::playGame()
    {
      sf::Event event;
      while (getWin().pollEvent(event))
      {
        if (event.type == sf::Event::Closed)
        {
          getWin().close();
        }
        if(objectClicked(event, button))
        {
          pushState(std::make_unique<HecticGame>(*stateController));
          return;
        }
      }
      getWin().clear();
      getWin().draw(button);
      getWin().display();
    }
}
