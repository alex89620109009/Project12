#include <SFML/Graphics.hpp>
#include "Headers/myHeader.h"

int main()
{

    
    
    
    
    while (window.isOpen())
    {
        
        sf::Event event;
        while (window.pollEvent(event))
        {
            renderScreen.DrawNewGrig();
            
            
            if (event.type == sf::Event::Closed)
                window.close();
    
            window.display();
            
        }
       
        
    }
    return 0;
}