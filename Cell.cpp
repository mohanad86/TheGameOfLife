#include "Cell.h"
#include <SFML/Graphics.hpp>
#include <vector>

using namespace std;
using namespace sf;

Cell::Cell() {

	int x = 0;
	int y = 0;
	sf::RectangleShape rectangle(sf::Vector2f(20, 20));
	rectangle.setOutlineThickness(-1);
	rectangle.setOutlineColor(Color::White);
	rectangle.setSize(sf::Vector2f(1, 1));
	rectangle.setPosition(x, y);
	rectangle.setFillColor(Color::Blue);
}
	
	void Cell::SetTargetAlive(bool TargetAlive) {
		
		if (TargetAlive)

			rectangle.setFillColor(Color::Red);
		else
			rectangle.setFillColor(Color::Black);
		
}


	void Cell::draw(RenderWindow &window) {
		
		window.draw(rectangle);
		window.draw(TargetAlive);
	}

