#include "../include/RandomGame.h"
#include "../include/Display.h"

namespace State
{
  RandomGame::RandomGame(Application& application)
  : Game_State (application),
    gen(rd()),
    randWidth(0, Display::WIDTH-R_SIZE),
    randHeight(0, Display::HEIGHT-R_SIZE),
    rect(sf::Vector2f(R_SIZE, R_SIZE)),
    currentPos(Display::WIDTH/2-R_SIZE, Display::HEIGHT/2-R_SIZE),
    clicked(false)
  {
    rect.setPosition(currentPos);
  }

  void RandomGame::input (const sf::Event& e)
  {
    if(objectClicked(e, currentPos, rect))
    {
      clicked = true;
    }
  }

  void RandomGame::update()
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
