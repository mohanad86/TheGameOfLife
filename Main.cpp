#include <SFML/Graphics.hpp>
#include <iostream>
int main()
{


	//starting with the window
	sf::RenderWindow window(sf::VideoMode(400, 400), "Welcome to Mohanad Game of life");
	sf::RectangleShape;
	while (window.isOpen())
	{
		window.clear(sf::Color::White);
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
			{
				window.close();
			}break;
			case sf::Event::Resized:
			{
				sf::FloatRect visibleArea(30, 30, event.size.width, event.size.height);
				window.setView(sf::View(visibleArea));
			}break;
			}

		}
		
		sf::Vector2i Grid(30, 30);
		sf::Texture setGrid;
		sf::Sprite setGridSprite;
		setGridSprite.setTexture(setGrid);
		setGridSprite.setColor(sf::Color::Blue);
		for (int i = 0; i < Grid.x; i++)
		{
			for (int j = 0; j < Grid.y; j++)
			{
				setGridSprite.setPosition(j * 32, i * 32);
				setGridSprite.setTextureRect(sf::IntRect(Grid.x * 20, Grid.y * 20, 20, 20));
				window.draw(setGridSprite);


					}
				}

				window.display();
			}
		}
