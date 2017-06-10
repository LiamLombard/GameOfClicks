#pragma once

#include "Game_State.h"
#include <SFML/Graphics.hpp>

namespace Display
{
  constexpr static int WIDTH = 1280;
  constexpr static int HEIGHT = 720;

  void init();
  void close();
  void clear();
  void update();
  void draw(const sf::Drawable& drawable);
  void checkForClose(const sf::Event& e);
  void pollEvents(State::Game_State& gameState);

  bool isOpen();
}
