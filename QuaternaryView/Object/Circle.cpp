#include "Circle.h"
#include <Siv3D.hpp>

CircleObject::CircleObject(const Define::Color& color, value_type radius, value_type mass, const Define::Vec2& position, const Define::Vec2& velocity, const Define::Vec2& acceleration) :
	color_(color),
	circleColider_(radius),
	rigidBody_(mass, position, velocity, acceleration)
{
}

void CircleObject::update()
{
	rigidBody_.update();
	circleColider_.update(rigidBody_.position());
}

void CircleObject::draw() const
{
	auto position = rigidBody_.position();
	Circle(position, circleColider_.radius()).draw(color_);
}

const CircleColider & CircleObject::circleColider() const
{
	return circleColider_;
}

const RigidBody & CircleObject::rigidBody() const
{
	return rigidBody_;
}
