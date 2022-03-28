#pragma once
#include <windows.h>

class Color
{
public:
	Color()
	{
		*((int*)this) = 0;
		color[0] = color[1] = color[2] = color[3] = 0;
	}

	Color(int r, int g, int b)
	{
		SetColor(r, g, b, 0);
	}

	Color(int r, int g, int b, int a)
	{
		SetColor(r, g, b, a);
	}

	void SetColor(int r, int g, int b, int a = 0)
	{
		color[0] = r;
		color[1] = g;
		color[2] = b;
		color[3] = a;
	}

	void GetColor(int& r, int& g, int& b, int& a) const
	{
		r = color[0];
		g = color[1];
		b = color[2];
		a = color[3];
	}

	Color OverrideAlpha(int overrideAlpha = 255)
	{
		return Color(color[0], color[1], color[2], overrideAlpha);
	}

	static Color DWORD2RGBA(unsigned long col)
	{
		return Color(((col >> 16) & 0xFF), ((col >> 8) & 0xFF), (col & 0xFF), ((col >> 24) & 0xFF));
	}

	static DWORD RGBA2DWORD(Color col)
	{
		return ((col.a() << 24) | (col.r() << 16) | (col.g() << 8) | col.b());
	}

	void SetRawColor(int color32)
	{
		*((int*)this) = color32;
	}

	int GetRawColor() const
	{
		return *((int*)this);
	}

	inline int r() const { return color[0]; }
	inline int g() const { return color[1]; }
	inline int b() const { return color[2]; }
	inline int a() const { return color[3]; }

	inline float rf() const { return color[0] / 255.f; }
	inline float gf() const { return color[1] / 255.f; }
	inline float bf() const { return color[2] / 255.f; }
	inline float af() const { return color[3] / 255.f; }

	int& operator[](int index)
	{
		return color[index];
	}

	const unsigned char& operator[](int index) const
	{
		return color[index];
	}

	bool operator == (const Color& rhs) const
	{
		return (*((int*)this) == *((int*)&rhs));
	}

	bool operator != (const Color& rhs) const
	{
		return !(operator==(rhs));
	}

	Color& operator=(const Color& rhs)
	{
		SetRawColor(rhs.GetRawColor());
		return *this;
	}

private:
	int color[4];
};