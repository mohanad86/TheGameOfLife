#pragma once
#include <SFML/Graphics.hpp>



class grid
{
public:
	//starting with static entries to make the grid
	 static const int x;
	 static const int y;
	 static const int windowWidth;
	 static const int windowHeight;
	 static const int rows = 32;
	 static const int columns = 32;


	grid();
	~grid();
};
