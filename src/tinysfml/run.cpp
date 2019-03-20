#include "tinysfml.hpp"

int tiny::run()
{
	setup();

	sf::RenderWindow& window = Context::window;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			default:
				break;
			case sf::Event::Closed:
				window.close();
				break;
			}
			draw();

			window.display();
		}
	}

	return 0;
}