#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;
class Cell {

private:

	RectangleShape Rect;

public:

	void draw(RenderWindow &window);
	Cell();
};

