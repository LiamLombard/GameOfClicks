#include "../include/RandomGame.h"
#include "../include/Display.h"
#include <iostream>

namespace State
{
  RandomGame::RandomGame(Application& application)
  : Game_State (application),
    gen(rd()),
    randWidth(0, Display::WIDTH-R_SIZE),
    randHeight(0, Display::HEIGHT-R_SIZE),
    rect(sf::Vector2f(R_SIZE, R_SIZE)),
    currentPos(Display::WIDTH/2-R_SIZE, Display::HEIGHT/2-R_SIZE),
    clicked(false),
    totalCount(0),
    hitCount(0)
  {
    rect.setPosition(currentPos);
  }

  void RandomGame::input (const sf::Event& e)
  {
    if(objectClicked(e, currentPos, rect))
    {
      clicked = true;
      hitCount++;
      totalCount++;
      // std::cout << "Accuracy: " << (float) hitCount/totalCount * 100 << '\n';
    }
    if(misClicked(e, currentPos, rect))
    {
      totalCount++;
    }
  }

  void RandomGame::update(float dt)
  {
    if(clicked)
    {
      currentPos = sf::Vector2f(randWidth(gen), randHeight(gen));
      rect.setPosition(currentPos);
      clicked = false;
    }
  }

  void RandomGame::draw()
  {
    Display::draw(rect);
  }
}
