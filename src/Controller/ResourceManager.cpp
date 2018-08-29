#include "ResourceManager.h"

namespace Controller
{
  ResourceManager::ResourceManager()
  {
    addFont("Hack-Regular.ttf", Hack);
  }

  void ResourceManager::addFont(const std::string& filename, enum FontRef reference)
  {
    sf::Font font;
    font.loadFromFile("../Resources/" + filename);
    fontList.insert(std::make_pair(reference, font));
  }

  const sf::Font& ResourceManager::getFont(enum FontRef reference) const
  {
    return fontList.at(reference);
  }
}
