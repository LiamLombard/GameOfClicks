#ifndef STATE_CONTROLLER_H
#define STATE_CONTROLLER_H

#include "../Model/States/BaseState.h"
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

    public:
      StateController(sf::RenderWindow& window);
      void pushState(std::unique_ptr<State::BaseState> nextState);
      void popState();
      void runMainLoop();


  };
}

#endif /* end of include guard: STATE_CONTROLLER_H */
