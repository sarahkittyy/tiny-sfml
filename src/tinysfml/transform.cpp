#include "tinysfml.hpp"

void tiny::resetTransform()
{
	Context::transform_reset();
}

void tiny::clearTransform()
{
	Context::transform_clear();
}

void tiny::translate(float x, float y)
{
	Context::transform().transform.translate(x, y);
}

void tiny::rotate(float deg)
{
	Context::transform().transform.rotate(deg);
}

void tiny::scale(float x, float y)
{
	Context::transform().transform.scale(x, y);
}

void tiny::scale(float x, float y, float centerx, float centery)
{
	Context::transform().transform.scale(x, y, centerx, centery);
}

void tiny::push()
{
	Context::transform_push();
}

void tiny::pop()
{
	Context::transform_pop();
}