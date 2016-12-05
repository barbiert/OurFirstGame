#include <SFML/Graphics.hpp>

int main()
{
	std::string windowsName = "OurFirstGame!";
	sf::RenderWindow window(sf::VideoMode(250, 200), windowsName);
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Red);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}