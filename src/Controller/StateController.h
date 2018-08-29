#pragma once

#include "../Model/States/BaseState.h"
#include "ResourceManager.h"
#include <stack>

namespace State
{
  class BaseState;
}

namespace Controller
{
  class StateController
  {
    private:
      sf::RenderWindow *win;
      std::stack<std::unique_ptr<State::BaseState>> stateStack;
      ResourceManager *rm;

    public:
      StateController(sf::RenderWindow& window, ResourceManager& resourceManager);
      void pushState(std::unique_ptr<State::BaseState> nextState);
      void popState();
      void runMainLoop();
      const ResourceManager& getResourceManager();
      sf::RenderWindow& getWin();


  };
}
