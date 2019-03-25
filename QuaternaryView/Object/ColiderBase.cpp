#include "ColiderBase.h"

void ColiderBase::update(const Define::Vec2& position)
{
	position_ = position;
}

const Define::Vec2 & ColiderBase::position() const
{
	return position_;
}
