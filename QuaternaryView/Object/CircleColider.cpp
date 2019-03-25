#include "CircleColider.h"

CircleColider::CircleColider(value_type radius) :
	radius_(radius)
{
}

void CircleColider::update(Define::Vec2 position)
{
	// TODO 四分木への再登録
}

CircleColider::value_type CircleColider::radius() const noexcept
{
	return radius_;
}
