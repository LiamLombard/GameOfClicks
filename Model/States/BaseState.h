#ifndef BASE_STATE_H
#define BASE_STATE_H

#include <SFML/Graphics.hpp>
#include "../UI/Button.h"

namespace Controller
{
  class StateController;
}

namespace State
{
  class BaseState
  {
    protected:
      sf::RenderWindow* win;
      Controller::StateController* stateController;

    public:
      BaseState(sf::RenderWindow& window, Controller::StateController& sc);
      virtual void playGame();
      bool objectClicked(const sf::Event& event, sf::Shape& shape);
      bool objectClicked(const sf::Event& event, UI::Button& shape);

  };
}

#endif /* end of include guard: BASE_STATE_H */
