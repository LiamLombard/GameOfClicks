#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include "BaseState.h"
#include "../UI/Button.h"

namespace State
{
  class MainMenu : public BaseState
  {
    private:
      UI::Button button;

    public:
      MainMenu(Controller::StateController& sc);
      void playGame();

  };
}

#endif /* end of include guard: MAIN_MENU_H */
