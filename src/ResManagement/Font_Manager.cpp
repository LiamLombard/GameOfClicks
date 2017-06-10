#include "../../include/ResManagement/Font_Manager.h"

Font_Manager::Font_Manager()
{
    std::string path ("Resource/Fonts/");

    registerResource(Font_ID::RS, path + "Hack-Regular.ttf");
}
