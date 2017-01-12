#include <SFML/Graphics.hpp>


int main()
{
	//starting with the window 
	sf::Window window(sf::VideoMode(800, 600), "Welcome to Mohanad Game Of Life");
	window.setFramerateLimit(60);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.setActive();
		window.display();
	}

}