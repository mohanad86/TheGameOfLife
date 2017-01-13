#include <SFML/Graphics.hpp>
#include "grid.h"
#include "cell.h"
#include <math.h>
#include <iostream>


using namespace sf;

int main()
{
	//Calling grid here
	//this will be 1027 / 32 which is defend in grid.cpp 
	int gridWidth = grid::windowWidth / grid::x;
	//this will be 720 / 32 which also defend in grid.cpp
	int gridHeight = grid::windowHeight / grid::y;
	//Calling cell setup 
	cell::Setup(gridWidth, gridHeight);
	int drawingCells[32][32];
	//starting with the window 
	sf::RenderWindow window(sf::VideoMode(grid::windowWidth, grid::windowHeight), "Welcome to Mohanad's Game Of Life");
	bool Gamestart;
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

				int clickX = (event.mouseButton.x / grid::x);
				int clickY = (event.mouseButton.y / grid::y);
				drawingCells[clickY][clickX] = drawingCells[clickY][clickX] == 1 ? 0.5 : 1;

				//checking is the mouse clicked or not
				printf("mouse clicked \n");
			}
			//this will run the game 
			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::R)
			{

				if (Gamestart = true) {
					for (size_t row = 0; row < gridHeight; row++)
					{
						int count = 0;
						if (drawingCells[32 - 1][32 - 1]) {
							++count;
						}
						if (drawingCells[32 - 1][32 - 1]) {
							++count;
						}
						if (drawingCells[32 + 1][32 - 1]) {
							++count;
						}
						if (drawingCells[32 + 1][32]) {
							++count;
						}
						if (drawingCells[32 + 1][32 + 1]) {
							++count;
						}
						if (drawingCells[32][32 + 1]) {
							++count;
						}
						if (drawingCells[32 - 1][32 + 1]) {
							++count;
						}
						if (drawingCells[32 - 1][32]) {
							++count;
						}
						else {
							for (int x = 0; x < gridWidth; x++) {
								for (int y = 0; y < gridHeight; y++) {
									drawingCells[x][y] = drawingCells[x][y];
								}



							}
						}

						printf("Start \n");
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
	}
}
