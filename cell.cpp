#include "cell.h"
//this is the shape which is called the target
RectangleShape  cell::target;


void cell::Setup(int gridWidth, int gridHeight)
{
	target = RectangleShape(sf::Vector2f(gridWidth, gridHeight));
	Setcolor(Color::White);
	target.setOutlineThickness(1.0f);
	target.setOutlineColor(sf::Color::Blue);

}

void cell::Setcolor(Color color) {
	target.setFillColor(color);

}

void cell::Setposition(int x, int y) {

	target.setPosition(x, y);

}

