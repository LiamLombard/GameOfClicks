#pragma once

#include "Game_State.h"
#include <random>

namespace State
{
  class RandomGame : public Game_State
  {
    public:
      RandomGame(Application& application);

      void input (const sf::Event& e) override;
      void update() override;
      void draw() override;

    protected:
      Application* m_application;

    private:
      std::random_device rd;
      std::mt19937 gen;
      std::uniform_int_distribution<int> randWidth;
      std::uniform_int_distribution<int> randHeight;
      constexpr static int R_SIZE = 50;
      sf::RectangleShape rect;
      sf::Vector2f currentPos;
      bool clicked;

  };
}
