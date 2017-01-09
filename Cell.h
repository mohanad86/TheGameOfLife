#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;
class Cell {

private:

	RectangleShape rectangle;

public:
	void TargetIsAlive(int TargetAlive);
	void draw(RenderWindow &window);
	Cell();
};

