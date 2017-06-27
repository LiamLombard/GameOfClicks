#include "Button.h"
#include <SFML/Graphics.hpp>
#include "../../Controller/StateController.h"

namespace UI
{
  Button::Button(Controller::StateController &screenController)
  : sc (&screenController)
  {





  }

  Button::Button(Controller::StateController &screenController, std::string string, FontRef font)
  : sc (&screenController)
  {
    setText(string, font);
    backGround.setSize(sf::Vector2f(text.getGlobalBounds().width+10.0f, text.getGlobalBounds().height+10.0f));
  }

  void Button::setText(std::string string, FontRef font)
  {
    text.setString(string);
    backGround.setSize(sf::Vector2f(text.getGlobalBounds().width+10.0f, text.getGlobalBounds().height+10.0f));
  }

  void Button::setColours(const sf::Color& backCol, const sf::Color& textCol)
  {
    backGround.setFillColor(backCol);
    text.setFillColor(textCol);
  }

  void Button::setPosition(sf::Vector2f &pos)
  {
    // sf::Vector2f centre(sc->getWin().getSize().x/2, sc->getWin().getSize().y/2);
    backGround.setPosition(pos-backGround.getSize()/2.0f);
    text.setPosition(pos-backGround.getSize()/2.0f);
  }

  void Button::setPosition(float x, float y)
  {
    sf::Vector2f pos(x, y);
    backGround.setPosition(pos-backGround.getSize()/2.0f);
    text.setPosition(pos-backGround.getSize()/2.0f);
  }

  std::size_t Button::getPointCount() const
  {
    return backGround.getPointCount();
  }

  sf::Vector2f Button::getPoint(std::size_t index) const
  {
    return backGround.getPoint(index);
  }


}
