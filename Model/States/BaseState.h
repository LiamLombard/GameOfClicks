#ifndef STATE_H
#define STATE_H

#include <vector>
#include <SFML/Graphics.hpp>

class ScreenManager;

namespace State
{
  class BaseState
  {
    public:
      BaseState(ScreenManager& scrmgr);
      virtual ~BaseState() {}

      virtual void processInput(const sf::Event& e) = 0;
      virtual void update() = 0;
      virtual sf::RectangleShape& draw() = 0;
      bool objectClicked(const sf::Event& event, const sf::Shape& entity);

    protected:
      ScreenManager* scrmgr;
      int R_SIZE = 50;
  };
}

#endif /* end of include guard: STATE_H */
