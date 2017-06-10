#pragma once

#include "Game_State.h"
#include <random>

namespace State
{
  class SplashScreen : public Game_State
  {
    public:
      SplashScreen(Application& application);

      void input (const sf::Event& e) override;
      void update(float dt) override;
      void draw() override;

    protected:
      Application* m_application;

    private:

  };
}
