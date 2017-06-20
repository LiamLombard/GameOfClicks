#include "BaseState.h"
#include "RandomGame.h"

#include <iostream>

namespace State
{
    RandomGame::RandomGame(ScreenManager& sm)
    : BaseState(sm)
    {
      square.setSize({50, 50});
      square.setFillColor(sf::Color::White);
      square.setPosition(0, 0);
    }

    void RandomGame::processInput(const sf::Event& e)
    {
      if(objectClicked(e, square))
      {
        std::cout << "yay\n";
      }
    }

    void RandomGame::update()
    {

    }

    sf::RectangleShape& RandomGame::draw()
    {
      return square;
    }
}
