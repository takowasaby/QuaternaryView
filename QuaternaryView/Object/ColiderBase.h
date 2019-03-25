#pragma once

#include "../Define.h"

class ColiderBase
{
public:
	void update(const Define::Vec2& position);
	const Define::Vec2& position() const;
private:
	Define::Vec2 position_;
};