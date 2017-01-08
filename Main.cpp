#include <SFML/Graphics.hpp>
#include "Grid.h"
#include <iostream>
#include <vector>
#include <array>
int main()
{


	//starting with the window
	sf::RenderWindow window(sf::VideoMode(400, 400), "Welcome to Mohanad Game of life");
	sf::RectangleShape;
	while (window.isOpen())
	{
		window.clear(sf::Color::White);
		sf::Event event;
		while (window.pollEvent(event))
		{
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


			}
		}

		window.display();
	}
}