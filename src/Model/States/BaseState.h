#pragma once

#include <SFML/Graphics.hpp>
#include "../UI/Button.h"
#include <memory>

namespace Controller
{
  class StateController;
}

namespace State
{
  class BaseState
  {
    protected:
      std::shared_ptr<Controller::StateController> stateController;

    public:
      BaseState(std::shared_ptr<Controller::StateController> sc);
      virtual ~BaseState() = 0;
      virtual void playGame();
      bool objectClicked(const sf::Event& event, const sf::Shape& shape);
      bool objectClicked(const sf::Event& event, const UI::Button& shape);
      sf::RenderWindow& getWin();
      void pushState(std::unique_ptr<State::BaseState> nextState);
  };
}
