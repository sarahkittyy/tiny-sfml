#include "tinysfml.hpp"

void tiny::resetTransform()
{
	Context::transform_reset();
}

void tiny::translate(float x, float y)
{
	sf::Transform translation;
	translation.translate(x, y);
	Context::transform().transform *= translation;
}

void tiny::push()
{
	Context::transform_push();
}

void tiny::pop()
{
	Context::transform_pop();
}