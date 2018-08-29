#pragma once

#include "BaseState.h"
#include "../UI/Button.h"

namespace State
{
  class MainMenu : public BaseState
  {
    private:
      UI::Button randbutton;
      UI::Button hecticbutton;
      UI::Button exitbutton;

    public:
      MainMenu(Controller::StateController& sc);
      void playGame();

  };
}
