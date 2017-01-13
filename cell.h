#pragma once
#include <SFML/Graphics.hpp>

//here to make easy
using namespace sf;


class cell
{
public:
	static RectangleShape target;


public:
	//setup the cell
	 static void Setup(int gridWidth, int gridHeight);
	//set the colors
	 static void Setcolor(Color color);
	//set the position
	 static void Setposition(int x, int y);


};

