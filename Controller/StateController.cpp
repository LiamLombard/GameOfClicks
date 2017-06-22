#include "StateController.h"
#include "../Model/States/MainMenu.h"

namespace Controller
{
  StateController::StateController(sf::RenderWindow& window)
  : win (&window)
  {
    pushState(std::make_unique<State::MainMenu>(*win, *this));
  }

  void StateController::pushState(std::unique_ptr<State::BaseState> nextState)
  {
    stateStack.push(std::move(nextState));
  }

  void StateController::popState()
  {
    stateStack.pop();
  }

  void StateController::runMainLoop()
  {
    while (win->isOpen())
    {
      stateStack.top()->playGame();
    }
  }

}
