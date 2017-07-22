#ifndef RANDOM_GEN_H
#define RANDOM_GEN_H

#include <random>
#include <SFML/Graphics.hpp>

namespace Utility
{
  class RandomGen
  {
    private:
      std::default_random_engine m_gen;
      std::uniform_int_distribution<int> m_randWidth;
      std::uniform_int_distribution<int> m_randHeight;
    public:
      RandomGen(const sf::Vector2u screenSize, const sf::Vector2f objSize);
      sf::Vector2f getRandomCoord();
  };
}

#endif /* end of include guard: RANDOM_GEN_H */
