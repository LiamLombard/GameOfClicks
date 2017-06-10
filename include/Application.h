#pragma once
#include "ResManagement/Resource_Holder.h"
#include <stack>
#include <memory>

#include "Game_State.h"

class Application
{
  public:
    Application();

    void runMainGameLoop();
    void pushState(std::unique_ptr<State::Game_State> state);
    void popState();
    const Resource_Holder& getResources() const;

  private:
    Resource_Holder m_resourceHolder;
    std::stack<std::unique_ptr<State::Game_State>> m_states;
};
