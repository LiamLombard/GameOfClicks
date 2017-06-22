#include <SFML/Graphics.hpp>
#include "../Model/States/RandomGame.h"
#include "StateController.h"

constexpr static int W_HEIGHT = 720;
constexpr static int W_WIDTH = 1280;

int main()
{
  sf::RenderWindow window(sf::VideoMode(W_WIDTH, W_HEIGHT), "Game of Clicks");
  Controller::StateController sc(window);
  State::RandomGame random(window, 50);
  sc.pushState(random);
  sc.runStateLoop();


  return 0;
}
