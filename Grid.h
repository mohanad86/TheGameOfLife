#pragma once
#define Grid_header
#include <SFML/Graphics.hpp>
#include "Cell.h"
#include <vector>

using namespace sf;
using namespace std;


class Grid
{
public:
	void Grid::draw(RenderWindow & window);
	Grid();
	Grid(int, int);
	std::vector<Cell>Cell;
	bool single_cell_width;
	bool single_cell_height;



	
	
	
private:

	RectangleShape grid;
};

