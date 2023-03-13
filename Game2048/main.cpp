#include <SFML/Graphics.hpp>
#include "Headers/myHeader.h"
using namespace sf;

int main()
{

    RenderWindow window(VideoMode(WindowWeight, WingowHeight), L"Новый проект", Style::Default);

    window.setVerticalSyncEnabled(true);

    
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        
    }
    return 0;
}