#include "CircleColider.h"

CircleColider::CircleColider(value_type radius) :
	radius_(radius)
{
}

CircleColider::value_type CircleColider::radius() const noexcept
{
	return radius_;
}
