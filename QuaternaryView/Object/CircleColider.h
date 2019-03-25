#pragma once

#include "../Define.h"

class CircleColider
{
public:
	using value_type = Define::value_type;

	CircleColider(value_type radius);
	void update(Define::Vec2 position);

	value_type radius() const noexcept;

private:
	value_type radius_;
};