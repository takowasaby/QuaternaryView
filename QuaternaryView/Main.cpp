﻿
#include <Siv3D.hpp> // OpenSiv3D v0.3.0
#include "Object/Circle.h" 

void Main()
{
	Graphics::SetBackground(ColorF(0.8, 0.9, 1.0));

	const Font font(60);

	const Texture textureCat(Emoji(U"🐈"), TextureDesc::Mipped);

	CircleObject circle(ColorF(0, 1, 0, 0.5), 60, 10, Vec2(0, 0), Vec2(0, 0), Vec2(0.01, 0.01));

	while (System::Update())
	{
		font(U"Hello, Siv3D!🐣").drawAt(Window::Center(), Palette::Black);

		font(Cursor::Pos()).draw(20, 500, ColorF(0.6));

		textureCat.resized(80).draw(700, 500);

		Circle(Cursor::Pos(), 60).draw(ColorF(1, 0, 0, 0.5));

		circle.update();
		circle.draw();
	}
}
