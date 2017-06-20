#include "ScreenManager.h"
#include "../View/Screen.h"
#include "../Model/States/RandomGame.h"


ScreenManager::ScreenManager()
{
  screen = std::make_unique<Screen::Screen>();
  pushState(std::make_unique<State::RandomGame>(*this));
}

void ScreenManager::showScreen()
{
  screen->init();
}

void ScreenManager::runMainLoop()
{
  while (screen->isOpen())
  {
    screen->clear();
    screen->draw(stateList.top()->draw());
    screen->update();

    screen->pollEvents();
  }
}

void ScreenManager::popState()
{
  stateList.pop();
}

void ScreenManager::pushState(std::unique_ptr<State::BaseState> state)
{
  stateList.push(std::move(state));
}
