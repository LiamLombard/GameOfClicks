#include "StateController.h"

namespace Controller
{
  StateController::StateController(sf::RenderWindow& window)
  : win (&window)
  {

  }

  void StateController::pushState(State::BaseState& nextState)
  {
    stateStack.push(std::move(&nextState));
  }

  void StateController::popState()
  {
    stateStack.pop();
  }

  void StateController::runStateLoop()
  {
    stateStack.top()->playGame();
  }

}
