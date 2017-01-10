#include <SFML/Graphics.hpp>
#include "Grid.h"
#include "Cell.h"
#include <iostream>
#include <vector>
#include <array>
#include <string>

using namespace sf;
using namespace std;
int main()
{
	int x = 0;
	int y = 0;
	
	//starting with the window
	Grid grid = Grid(400, 400);

	sf::RenderWindow window(sf::VideoMode(400, 400), "Welcome to Mohanad Game of life");
	sf::RectangleShape;
	while (window.isOpen())
	{

		window.clear(sf::Color::White);
		sf::Event event;
		while (window.pollEvent(event))
		{
			//declare the keyboard event 
			if (event.type == Event::KeyPressed) {
				
				switch (event.key.code) {
				//when esc pressed quit the game
				case Keyboard::Escape:
					window.close();
				}
					
				if (event.type == sf::Event::MouseButtonPressed)
				{
					
					x = Mouse::getPosition(window).x;
					y = Mouse::getPosition(window).y;

				}
				if (event.type == sf::Event::MouseButtonReleased)
				{
					sf::Mouse::getPosition(window);

				}

					switch (event.type)
					{
					case sf::Event::Closed:
					{
						window.close();
					}break;
					case sf::Event::Resized:
					{
						sf::FloatRect visibleArea(30, 30, event.size.width, event.size.height);
						window.setView(sf::View(visibleArea));
					}break;
					
					
						window.display();

					}
					}
				}
			}

		}

