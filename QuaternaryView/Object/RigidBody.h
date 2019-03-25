#pragma once
#include "../Define.h"

class RigidBody
{
public:
	using value_type = Define::value_type;

	struct Value
	{
		Value(value_type mass, value_type positionX, value_type positionY, value_type velocityX, value_type velocityY, value_type accelerationX, value_type accelerationY);

		value_type mass_;

		value_type positionX_;
		value_type positionY_;

		value_type velocityX_;
		value_type velocityY_;

		value_type accelerationX_;
		value_type accelerationY_;
	};

	RigidBody(value_type mass, const Define::Vec2& position, const Define::Vec2& velocity, const Define::Vec2& acceleration);
	void update();

	Define::Vec2 position() const;

private:
	Value currentValue_;
	Value preValue_;
};