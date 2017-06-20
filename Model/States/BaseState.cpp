#include "BaseState.h"
#include "../../Controller/ScreenManager.h"

namespace State
{
    BaseState::BaseState(ScreenManager& sm)
    : scrmgr(&sm)
    {

    }

    bool objectClicked(const sf::Event& event, const sf::Shape& entity)
    {
      if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
      {
        return entity.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y);
      }
      return false;
    }
}
