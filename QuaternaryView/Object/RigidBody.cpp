#include "RigidBody.h"

RigidBody::RigidBody(value_type mass, const Define::Vec2& position, const Define::Vec2& velocity, const Define::Vec2& acceleration) :
	currentValue_(mass, position.x, position.y, velocity.x, velocity.y, acceleration.x, acceleration.y),
	preValue_(mass, position.x, position.y, velocity.x, velocity.y, acceleration.x, acceleration.y)
{
}

void RigidBody::update()
{
	preValue_ = currentValue_;

	currentValue_.velocityX_ += currentValue_.accelerationX_;
	currentValue_.velocityY_ += currentValue_.accelerationY_;
	currentValue_.positionX_ += currentValue_.velocityX_;
	currentValue_.positionY_ += currentValue_.velocityY_;
}

Define::Vec2 RigidBody::position() const
{
	return Define::Vec2(currentValue_.positionX_, currentValue_.positionY_);
}

RigidBody::Value::Value(value_type mass, value_type positionX, value_type positionY, value_type velocityX, value_type velocityY, value_type accelerationX, value_type accelerationY) :
	mass_(mass),
	positionX_(positionX),
	positionY_(positionY),
	velocityX_(velocityX),
	velocityY_(velocityY),
	accelerationX_(accelerationX),
	accelerationY_(accelerationY)
{
}
