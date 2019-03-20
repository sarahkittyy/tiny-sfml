#include "Context.hpp"

sf::RenderWindow Context::window;
sf::Color Context::color_stroke;
sf::Color Context::color_fill;
float Context::stroke_width;

std::stack<sf::RenderStates> Context::transform_stack;
sf::RenderStates Context::current_transform;
sf::RenderStates& Context::transform()
{
	return current_transform;
}

void Context::transform_reset()
{
	while (!transform_stack.empty())
	{
		transform_stack.pop();
	}
	current_transform = sf::RenderStates::Default;
}

void Context::transform_push()
{
	transform_stack.push(current_transform);
	current_transform = sf::RenderStates::Default;
}

void Context::transform_pop()
{
	if (transform_stack.empty())
	{
		throw std::out_of_range("Transformation stack is empty, cannot pop!");
	}
	sf::RenderStates temp = transform_stack.top();
	temp.transform *= current_transform.transform;
	current_transform = temp;
	transform_stack.pop();
}

void Context::draw(const sf::Drawable& drawable)
{
	window.draw(drawable, transform());
}