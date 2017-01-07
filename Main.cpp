#include <SFML/Graphics.hpp>
#include <iostream>


int main()
{	
	
	//starting with the window
	sf::RenderWindow window(sf::VideoMode(600, 600), "Welcome to Mohanad Game of life");
	while (window.isOpen())
	{
		sf::Event event;
		while (window.waitEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
			{
				window.close();
			}break;
			case sf::Event::Resized:
			{
			}break;
			}
		}
		window.display();
	}
}