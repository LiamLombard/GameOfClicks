#include "BaseState.h"
#include "../../Controller/StateController.h"

namespace State
{
  BaseState::BaseState(std::shared_ptr<Controller::StateController> sc)
  : stateController(sc)
  {
  }

  BaseState::~BaseState()
  {
  }

  void BaseState::playGame()
  {

  }

  bool BaseState::objectClicked(const sf::Event& event, const sf::Shape& shape)
  {
    if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
    {
      return shape.getGlobalBounds().contains(static_cast<float>(event.mouseButton.x), static_cast<float>(event.mouseButton.y));
    }
    return false;
  }

  bool BaseState::objectClicked(const sf::Event& event, const UI::Button& shape)
  {
    return objectClicked(event, shape.getBackGround());
  }

  sf::RenderWindow& BaseState::getWin()
  {
    return stateController->getWin();
  }

  void BaseState::pushState(std::unique_ptr<State::BaseState> nextState)
  {
    stateController->pushState(std::move(nextState));
  }

}
