#include <SFML/Graphics.hpp>
#include <vector>
sf::RenderWindow window(sf::VideoMode(WindowSize + WindowMargin, WindowSize ), L"2048", sf::Style::Titlebar | sf::Style::Close);
class RenderingScreen {
	public:
	/*	void GameCell()
		{
			sf::RectangleShape shape(sf::Vector2f(BlockSize,BlockSize));
			shape.setFillColor(sf::Color(0, 0, 0));
			shape.setPosition(sf::Vector2f(5, 5));
			shape.setOutlineThickness(5);
			shape.setOutlineColor(sf::Color(255, 255, 255));
			
		}*/
		void DrawGameCell() {
		
			float positionX = 5;
			float positionY = 0;
			static std::vector<sf::RectangleShape> cells;
			for (size_t i = 0; i < 16; i++)
			{
				cells.push_back(sf::RectangleShape(sf::Vector2f(WindowSize/4, WindowSize/4)));
				cells[i].setFillColor(sf::Color(0, 0, 0));
				cells[i].setOutlineThickness(5);
				cells[i].setOutlineColor(sf::Color(255, 255, 255));
			}
			
			for (size_t j = 0; j < 4; j++)
			{
				for (size_t i = 0; i < 4; i++)
				{
					
					cells[i].setPosition(sf::Vector2f(positionX, positionY));
					positionX += WindowSize / 4;
					window.draw(cells[i]);
				}
				positionY += WindowSize / 4;
				positionX = 5;
				
			}
			

		}
};