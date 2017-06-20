#ifndef SCREEN_H
#define SCREEN_H

#include <cstdint>
#include <SFML/Graphics.hpp>

namespace Screen
{
  class Screen
  {
    private:
      const uint16_t WIDTH  = 1280;
      const uint16_t HEIGHT = 720;
      std::unique_ptr<sf::RenderWindow> window;

    public:
      Screen();
      void init();
      bool isOpen ();
      void update ();
      void clear  (const sf::Color& colour = sf::Color::Black);
      void draw(const sf::Drawable& drawable);
      void checkForClose(const sf::Event& e);
      void pollEvents();
  };
}

#endif /* end of include guard: SCREEN_H */
