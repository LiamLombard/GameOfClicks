#ifndef BUTTON_H
#define BUTTON_H

#include <string>
#include <SFML/Graphics.hpp>
#include "../../Controller/ResourceManager.h"

namespace Controller
{
  class StateController;
}

// Need to implement drawing

namespace UI
{
  class Button : public sf::Shape
  {
    public:
      Button(Controller::StateController &screenController);
      Button(Controller::StateController &screenController, std::string string, FontRef font = Hack);
      void setText(std::string string, FontRef font = Hack);
      void setColours(const sf::Color& backCol = sf::Color::White, const sf::Color& textCol= sf::Color::Black);
      void setPosition(sf::Vector2f& pos);
      void setPosition(float x, float y);
      virtual std::size_t getPointCount() const;
      virtual sf::Vector2f getPoint(std::size_t index) const;
      sf::RectangleShape& getBackGround();
      virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    private:
      Controller::StateController *sc;
      sf::RectangleShape backGround;
      sf::Text text;
      sf::Vector2f buttonSize;

  };
}

#endif /* end of include guard: BUTTON_H */
