#include "MainMenu.h"
#include "RandomGame.h"
#include "HecticGame.h"


namespace State
{
    MainMenu::MainMenu(Controller::StateController& sc)
    : BaseState(sc),
    randbutton(*stateController, "Random Game", Hack),
    hecticbutton(*stateController, "Hectic Game", Hack)
    {
      randbutton.setPosition(getWin().getSize().x/2, getWin().getSize().y * 0.4);
      hecticbutton.setPosition(getWin().getSize().x/2, getWin().getSize().y * 0.6);

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
        if(objectClicked(event, randbutton))
        {
          pushState(std::make_unique<RandomGame>(*stateController, 50));
          return;
        }
        if(objectClicked(event, hecticbutton))
        {
          pushState(std::make_unique<HecticGame>(*stateController));
          return;
        }
      }
      getWin().clear();
      getWin().draw(randbutton);
      getWin().draw(hecticbutton);
      getWin().display();
    }
}
