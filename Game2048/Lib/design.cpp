#include <SFML/Graphics.hpp>
sf::RenderWindow window(sf::VideoMode(WindowWeight, WingowHeight), L"Новый проект", sf::Style::Default);
class RenderingScreen {
	public:
		void DrawNewGrig() 
		{
			float position = 0;
			sf::RectangleShape line(sf::Vector2f(600,5));
			while (position <= WingowHeight)
			{
				line.setPosition(0, position);
				window.draw(line);
				position += WingowHeight / 4;
			} 
			line.rotate(90);
			position = 0;
			while (position <= WindowWeight)
			{
				line.setPosition(position, 0);
				window.draw(line);
				position += WindowWeight / 4;
			} 
			
			
			
			
			line.setFillColor(sf::Color(255, 147, 170));
			
			
		}
};