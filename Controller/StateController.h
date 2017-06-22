#ifndef STATE_CONTROLLER_H
#define STATE_CONTROLLER_H

#include "../Model/States/BaseState.h"
#include <SFML/Graphics.hpp>
#include <stack>

namespace Controller
{
  class StateController
  {
    private:
      sf::RenderWindow *win;
      std::stack<State::BaseState*> stateStack;

    public:
      StateController(sf::RenderWindow& window);
      void pushState(State::BaseState& nextState);
      void popState();
      void runStateLoop();


  };
}

#endif /* end of include guard: STATE_CONTROLLER_H */
