#include <SFML/Graphics.hpp>
#include "../Model/States/RandomGame.h"
#include "StateController.h"

constexpr static int W_HEIGHT = 720;
constexpr static int W_WIDTH = 1280;

int main()
{
  Controller::ResourceManager rm;
  sf::RenderWindow window(sf::VideoMode(W_WIDTH, W_HEIGHT), "Game of Clicks");
  Controller::StateController sc(window, rm);
  sc.runMainLoop();


  return 0;
}
