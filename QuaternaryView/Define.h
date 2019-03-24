#pragma once

#include <Siv3D/Vector2D.hpp>
#include <Siv3D/Color.hpp>

class Define
{
public:
	using Vec2 = s3d::Vec2;
	using Color = s3d::Color;

	using value_type = Vec2::value_type;

	static const value_type GravitationalAcceleration;
	
};