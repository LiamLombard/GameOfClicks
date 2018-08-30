#include "MainMenu.h"
#include "RandomGame.h"
#include "HecticGame.h"


namespace State
{
    MainMenu::MainMenu(std::shared_ptr<Controller::StateController> sc)
    : BaseState(sc),
    randbutton(*stateController, "Random Game", Hack),
    hecticbutton(*stateController, "Hectic Game", Hack),
    exitbutton(*stateController, "Quit Game", Hack)
    {
      const float halfWidth = static_cast<float>(getWin().getSize().x/2);
      randbutton.setPosition(halfWidth, static_cast<float>(getWin().getSize().y * 0.25));
      hecticbutton.setPosition(halfWidth, static_cast<float>(getWin().getSize().y * 0.5));
      exitbutton.setPosition(halfWidth, static_cast<float>(getWin().getSize().y * 0.75));
    }

    MainMenu::~MainMenu()
    {
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
          pushState(std::make_unique<RandomGame>(stateController, 50));
          return;
        }
        if(objectClicked(event, hecticbutton))
        {
          pushState(std::make_unique<HecticGame>(stateController));
          return;
        }
        if(objectClicked(event, exitbutton))
        {
          getWin().close();
          return;
        }
      }
      getWin().clear();
      getWin().draw(randbutton);
      getWin().draw(hecticbutton);
      getWin().draw(exitbutton);
      getWin().display();
    }
}
