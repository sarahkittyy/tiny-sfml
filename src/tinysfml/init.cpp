#include "tinysfml.hpp"

void tiny::createWindow(unsigned width, unsigned height)
{
	Context::window.create(sf::VideoMode(width, height), "");
}

void tiny::framerate(unsigned max)
{
	Context::window.setFramerateLimit(max);
}

void tiny::title(std::string title)
{
	Context::window.setTitle(title);
}

void tiny::background(unsigned r, unsigned g, unsigned b)
{
	Context::window.clear(sf::Color(r, g, b));
}

void tiny::background(unsigned v)
{
	Context::window.clear(sf::Color(v, v, v));
}