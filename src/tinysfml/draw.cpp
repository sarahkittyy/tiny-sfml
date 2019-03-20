#include "tinysfml.hpp"

void tiny::fill(unsigned r, unsigned g, unsigned b)
{
	Context::color_fill = sf::Color(r, g, b);
}

void tiny::fill(unsigned v)
{
	Context::color_fill = sf::Color(v, v, v);
}

void tiny::stroke(unsigned r, unsigned g, unsigned b)
{
	Context::color_stroke = sf::Color(r, g, b);
}

void tiny::stroke(unsigned v)
{
	Context::color_stroke = sf::Color(v, v, v);
}

void tiny::strokeWidth(float width)
{
	Context::stroke_width = width;
}

void tiny::rect(float x, float y, float w, float h)
{
	sf::RectangleShape rect({w, h});
	rect.setPosition(x, y);
	rect.setFillColor(Context::color_fill);
	rect.setOutlineColor(Context::color_stroke);
	rect.setOutlineThickness(Context::stroke_width);
	Context::window.draw(rect);
}