#include "MainMenu.h"
#include "RandomGame.h"
#include "../../Controller/StateController.h"


namespace State
{
    MainMenu::MainMenu(sf::RenderWindow& window, Controller::StateController& sc)
    : BaseState(window, sc),
    mainButton(sf::Vector2f(100, 20))
    {
      sf::Vector2f centre(win->getSize().x/2, win->getSize().y/2);
      playGameText.setFont(sc.getResourceManager().getFont(Hack));
      playGameText.setString("Play the game!");
      playGameText.setFillColor(sf::Color::Blue);
      playGameText.setPosition(centre - playGameText.getPosition()/2.0f);

      mainButton.setPosition(centre - sf::Vector2f(50, 10));
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
      win->draw(playGameText);
      win->display();
    }
}
