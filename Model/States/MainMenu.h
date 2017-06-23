#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include "BaseState.h"


namespace State
{
  class MainMenu : public BaseState
  {
    private:
      sf::Text playGameText;
      sf::RectangleShape mainButton;

    public:
      MainMenu(sf::RenderWindow& window, Controller::StateController& sc);
      void playGame();

  };
}

#endif /* end of include guard: MAIN_MENU_H */
