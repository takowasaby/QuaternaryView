#pragma once

#include "../Define.h"
#include "CircleColider.h"
#include "RigidBody.h"

class CircleObject
{
public:
	using value_type = Define::value_type;

	CircleObject(const Define::Color& color, value_type radius, value_type mass, const Define::Vec2& position, const Define::Vec2& velocity, const Define::Vec2& acceleration);
	void draw();

private:
	Define::Color color_;

	CircleColider circleColider_;
	RigidBody rigidBody_;
};