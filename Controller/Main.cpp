#include "../View/Screen.h"
#include "ScreenManager.h"

int main()
{
  ScreenManager sm;
  sm.showScreen();
  sm.runMainLoop();
  return 0;
}
