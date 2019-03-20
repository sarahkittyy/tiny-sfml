#pragma once

#include <SFML/Graphics.hpp>

class Context
{
public:
	static sf::RenderWindow window;
	static sf::Color color_stroke;
	static sf::Color color_fill;
	static float stroke_width;
};