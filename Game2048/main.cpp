#include "SFML/Graphics.hpp"
#include "Headers/myHeader.h"

int main()
{
    
    RenderingScreen renderingScreen;
    
    
    
    while (window.isOpen())
    {
        
        sf::Event event;
        while (window.pollEvent(event))
        {
            
            renderingScreen.DrawGameCell();
            
            
            if (event.type == sf::Event::Closed)
                window.close();
    
            window.display();
            
        }
       
        
    }
    return 0;
}