#pragma once

#include <SFML/Graphics.hpp>

#include <stack>
#include <stdexcept>

/**
 * @brief Context class, stores information about the graphical context.
 * 
 */
class Context
{
public:
	static sf::RenderWindow window;
	static sf::Color color_stroke;
	static sf::Color color_fill;
	static float stroke_width;

	static std::stack<sf::RenderStates> transform_stack;
	static sf::RenderStates current_transform;
	static sf::RenderStates& transform();
	static void transform_reset();
	static void transform_clear();
	static void transform_push();
	static void transform_pop();

	static void draw(const sf::Drawable& drawable);
};