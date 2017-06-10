#include "../include/Application.h"
#include "../include/Display.h"
#include "../include/RandomGame.h"

Application::Application()
{
  pushState(std::make_unique<State::RandomGame>(*this));
}

void Application::runMainGameLoop()
{
  while(Display::isOpen())
  {
    Display::clear();
    
    Display::pollEvents(*m_states.top());
    m_states.top()->update();
    m_states.top()->draw();

    Display::update();
  }
}

void Application::pushState(std::unique_ptr<State::Game_State> state)
{
  m_states.push(std::move(state));
}

void Application::popState()
{
  m_states.pop();
}
