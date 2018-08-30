#include "StateController.h"
#include "../Model/States/MainMenu.h"
#include <iostream>

namespace Controller
{
  StateController::StateController(sf::RenderWindow& window, ResourceManager& resourceManager)
  : win (&window),
  rm(&resourceManager)
  {
    std::shared_ptr<StateController> thisPtr(this);
    pushState(std::make_unique<State::MainMenu>(thisPtr));
  }

  StateController::~StateController()
  {
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

  const ResourceManager& StateController::getResourceManager()
  {
    return *rm;
  }

  sf::RenderWindow& StateController::getWin()
  {
    return *win;
  }

}
