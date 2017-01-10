#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;
class Cell {

private:

	RectangleShape rectangle;
	RectangleShape TargetAlive;
	//calling here 
	Cell(int x, int y);
	RectangleShape Getrectangle();
	bool AliveTarget();


public:
	void SetTargetAlive(bool TargetAlive);
	void draw(RenderWindow &window);

	Cell();
};

