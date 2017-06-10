#include "../include/RandomGame.h"
#include "../include/Display.h"

namespace State
{
  RandomGame::RandomGame(Application& application)
  : Game_State (application),
    gen(rd()),
    randWidth(0, Display::WIDTH-R_SIZE),
    randHeight(0, Display::HEIGHT-R_SIZE)
  {

  }

  void RandomGame::input()
  {

  }

  void RandomGame::update()
  {
    
  }

  void RandomGame::draw()
  {

  }
}
