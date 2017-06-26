#ifndef BUTTON_H
#define BUTTON_H

#include <string>
#include <SFML/Graphics.hpp>

namespace UI
{
  class Button : public sf::Shape
  {
    public:
      Button(sf::Vector2f& size);
      void setText(std::string& string, sf::Font& font);
      void setBackgroundColour(const sf::Color& col);
      void setTextColour(const sf::Color& col);
    private:
      sf::RectangleShape backGround;
      sf::Text text;
      sf::Vector2f buttonSize;
      int padding = 5;

  };
}

#endif /* end of include guard: BUTTON_H */
