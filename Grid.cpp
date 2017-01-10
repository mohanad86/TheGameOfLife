#include "Grid.h"
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;
Grid::Grid(int x, int y)
{
	sf::Vector2i Grid(400, 400);
	sf::Texture setGrid;
	sf::Sprite setGridSprite;
	setGridSprite.setTexture(setGrid);
	setGridSprite.setColor(sf::Color::Blue);
		for (int i = 0; i < Grid.x; i += single_cell_width)
	{
		for (int j = 0; j < Grid.y; j += single_cell_height)
		{
			// create new cell here and add it to vector
		}
	}
	setGridSprite.setPosition(j * 32, i * 32);
	setGridSprite.setTextureRect(sf::IntRect(Grid.x * 20, Grid.y * 20, 20, 20));
}

	

void Grid::draw(RenderWindow &window)
{
	window.draw(grid);
}


