#pragma once
#define Grid_header
#include <SFML/Graphics.hpp>


using namespace sf;

class Grid
{
	Grid();
public:
	void Grid::draw(RenderWindow & window);
	

	
	
	
private:
	RectangleShape grid;

};

