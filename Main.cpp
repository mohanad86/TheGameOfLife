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
	sf::RenderWindow window(sf::VideoMode(800,600), "Welcome to Mohanad Game Of Life");

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
					printf("Bye Bye and see you next time \n");
					exit(0);
					
				}
			}
			if (event.type == sf::Event::MouseButtonPressed) {

				int clickX = (event.mouseButton.x / gridWidth);
				int clickY = (event.mouseButton.y / gridHeight);
				drawingCells[clickY][clickX] = drawingCells[clickY][clickX] == 1 ? 0.5 : 1;

				//checking is the mouse clicked or not
				printf("mouse clicked \n");

			}

			window.clear();
			
			for (size_t row = 0; row < grid::x; row++)
			{
				for (size_t column = 0; column < grid::y; column++)
				{
					int state = drawingCells[row][column];
					if (state == 1) {
						cell::Setcolor(Color::White);
					}
					else if (state == 0) {
						cell::Setcolor(Color::Blue);

					}
					cell::Setposition((column * gridWidth), (row * gridHeight));
					window.draw(cell::target);

				}

			}
			window.display();

		}

	}
}

