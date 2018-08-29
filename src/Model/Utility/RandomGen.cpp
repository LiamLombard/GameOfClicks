#include "RandomGen.h"

namespace Utility
{
  RandomGen::RandomGen(sf::Vector2u screenSize, sf::Vector2f objSize)
  : m_randWidth(0, screenSize.x-objSize.x),
  m_randHeight(0,screenSize.y-objSize.y)
  {
    m_gen.seed(std::random_device()());
  }

  sf::Vector2f RandomGen::getRandomCoord()
  {
    return sf::Vector2f(m_randWidth(m_gen), m_randHeight(m_gen));
  }
}
