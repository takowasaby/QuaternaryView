#include "Circle.h"
#include <Siv3D.hpp>

CircleObject::CircleObject(const Define::Color& color, value_type radius, value_type mass, const Define::Vec2& position, const Define::Vec2& velocity, const Define::Vec2& acceleration) :
	color_(color),
	circleColider_(radius),
	rigidBody_(mass, position, velocity, acceleration)
{
}

void CircleObject::draw()
{
	Circle(rigidBody_.position(), circleColider_.radius()).draw(color_);
}
