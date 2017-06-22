#include <SFML/Graphics.hpp>
#include <iostream>
#include <random>
#include "../Model/States/RandomGame.h"

constexpr static int W_HEIGHT = 720;
constexpr static int W_WIDTH = 1280;






int main()
{
  sf::RenderWindow window(sf::VideoMode(W_WIDTH, W_HEIGHT), "LimTest");
  State::RandomGame random(window, 50);
  random.playGame();


  return 0;
}
