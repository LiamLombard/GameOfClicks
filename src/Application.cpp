#include "../include/Application.h"
#include "../include/Display.h"
#include "../include/RandomGame.h"
// #include "../include/ResManagement/Resource_Holder.h"
#include <iostream>

namespace
{
  void calculateFPS()
  {
    static sf::Clock timer;
    static sf::Clock printTimer;
    static auto numFrames = 0;

    numFrames++;

    if (printTimer.getElapsedTime().asSeconds() >= 1.0f)
    {
      auto fps = (float)numFrames / timer.getElapsedTime().asSeconds();
      printTimer.restart();
      std::cout << fps << std::endl;

      numFrames = 0;
      timer.restart();
    }
  }
}

Application::Application()
{
  Display::init();
  pushState(std::make_unique<State::RandomGame>(*this));
}

void Application::runMainGameLoop()
{
  sf::Clock c;
  while(Display::isOpen())
  {
    auto dt = c.restart().asSeconds();

    Display::clear();

    Display::pollEvents(*m_states.top());
    m_states.top()->update(dt);
    m_states.top()->draw();

    Display::update();
    calculateFPS();
  }
}

const Resource_Holder& Application::getResources() const
{
    return m_resourceHolder;
}

void Application::pushState(std::unique_ptr<State::Game_State> state)
{
  m_states.push(std::move(state));
}

void Application::popState()
{
  m_states.pop();
}
