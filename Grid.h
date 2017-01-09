#pragma once
#define Grid_header
#include <SFML/Graphics.hpp>


using namespace sf;

class Grid
{
public:
	void Grid::draw(RenderWindow & window);
	Grid();
	Grid(int , int );


	
	
	
private:
	RectangleShape grid;
};

