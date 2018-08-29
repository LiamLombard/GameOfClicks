#pragma once

#include <SFML/Graphics.hpp>
#include <map>

enum FontRef
{
  Hack
};

namespace Controller
{
    class ResourceManager
    {
      private:
        std::map<enum FontRef, sf::Font> fontList;

      public:
        ResourceManager();
        void addFont(const std::string& filename, enum FontRef reference);
        const sf::Font& getFont(enum FontRef reference) const;
    };
}
