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
	void draw(RenderWindow & window);
	Grid(int, int);
	std::vector<Cell>Cell;
	std::vector<std::vector<int>> cell;
	
		
	



	
	
	
private:
	RectangleShape grid;
	bool cell_width[5][5];
	bool cell_height[5][5];
};

