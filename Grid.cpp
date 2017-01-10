#include "Grid.h"
#include <SFML/Graphics.hpp>

using namespace sf;

Grid::Grid(int x, int y)
{


		}



void Grid::draw(RenderWindow &window)
{
	sf::Vector2i Grid(400, 400);
	sf::Texture setGrid;
	sf::Sprite setGridSprite;
	setGridSprite.setTexture(setGrid);
	setGridSprite.setColor(sf::Color::Blue);

	for (int i = 0; i < Grid.x; i += cell_width[5][5])
	{

		for (int j = 0; j < Grid.y; j += cell_height[5][5])
		{
			setGridSprite.setPosition(j * 32, i * 32);
			setGridSprite.setTextureRect(sf::IntRect(Grid.x * 20, Grid.y * 20, 20, 20));

			window.draw(grid);
		}

	}
	}