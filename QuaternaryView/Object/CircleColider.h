#pragma once

#include "../Define.h"
#include "ColiderBase.h"

class CircleColider : public ColiderBase
{
public:
	using value_type = Define::value_type;

	CircleColider(value_type radius);

	value_type radius() const noexcept;

private:
	value_type radius_;
};