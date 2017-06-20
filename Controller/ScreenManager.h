#ifndef SCREEN_MANAGER_H
#define SCREEN_MANAGER_H

#include "../View/Screen.h"
#include "../Model/States/BaseState.h"
#include <memory>
#include <stack>


class ScreenManager
{
  private:
    std::unique_ptr<Screen::Screen> screen;
    std::stack<std::unique_ptr<State::BaseState>> stateList;


  public:
    ScreenManager();
    void showScreen();
    void runMainLoop();
    void popState();
    void pushState(std::unique_ptr<State::BaseState> state);

};

#endif /* end of include guard: SCREEN_MANAGER_H */
