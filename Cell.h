#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;
class Cell {

private:

	RectangleShape rectangle;
	RectangleShape TargetAlive;

public:
	void SetTargetAlive(bool TargetAlive);
	void draw(RenderWindow &window);
	Cell();
};

