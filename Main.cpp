#include <SFML/Graphics.hpp>
#include "grid.h"
#include "cell.h"
#include <math.h>
#include <iostream>


using namespace sf;

int main()
{
	//Calling grid here
	int gridWidth = grid::windowWidth / grid::x;
	int gridHeight = grid::windowHeight / grid::y;
	//Calling cell setup 
	cell::Setup(gridWidth, gridHeight);
	int drawingCells[32][32];
	//starting with the window 
	sf::RenderWindow window(sf::VideoMode(grid::windowWidth, grid::windowHeight), "Welcome to Mohanad Game Of Life");
	cell::Setup(gridWidth, gridHeight);


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == Event::KeyPressed) {
				switch (event.key.code) {
				case Keyboard::Escape:
					exit(0);
					if (event.type == sf::Event::MouseButtonPressed) {
						int clickX = (event.mouseButton.x / gridWidth);
						int clickY = (event.mouseButton.y / gridWidth);

					}
				 	
				}
					{
					}
				}
			}
		window.clear();
		for (size_t row = 0; row < grid::x; row++)
		{
			for (size_t column = 0; column < grid::y; column++)
			{
				int total = drawingCells[32][32];
				if (total == 1) {
					cell::Setcolor(Color::White);
				}
				else if (total == 0) {
					cell::Setcolor(Color::Blue);

				}
				cell::Setposition((column * gridWidth), (row * gridHeight));
				window.draw(cell::target);
			}
		
				}
			window.display();

			}
		}
