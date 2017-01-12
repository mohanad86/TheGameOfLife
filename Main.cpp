#include <SFML/Graphics.hpp>
#include "grid.h"
#include "cell.h"

using namespace sf;

int main()
{
	int gridWidth = grid::windowWidth / grid::x;
	int gridHeight = grid::windowHeight / grid::y;
	cell::Setup(gridWidth, gridHeight);
	

	//starting with the window 
	sf::RenderWindow window(sf::VideoMode(grid::windowWidth, grid::windowHeight), "Welcome to Mohanad Game Of Life");

	sf::Event windowEvent;
	cell::Setup(gridWidth, gridHeight);
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.draw(cell::target);
		window.setActive();
		window.display();
	}

}