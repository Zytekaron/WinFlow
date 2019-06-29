#include <windows.h>
#include <objidl.h>
#include <gdiplus.h>

#include "Resource.h"

#pragma comment (lib, "Gdiplus.lib")

using Gdiplus::Graphics;
using Gdiplus::Color;
using Gdiplus::Pen;

void paintStuff(HDC hdc) {
	Graphics graphics(hdc);
	Pen      pen(Color(255, 0, 0));
	graphics.DrawLine(&pen,   0,  0, 200, 100);
	graphics.DrawLine(&pen, 200,  0,   0, 100);
	graphics.DrawLine(&pen, 100,  0, 100, 100);
	graphics.DrawLine(&pen,   0, 50, 200,  50);
	pen.SetColor(Color(0, 0, 255));
	graphics.DrawLine(&pen, 150, 175, 150, 200); // e1 r
	graphics.DrawLine(&pen, 100, 175, 100, 200); // e2 l
	graphics.DrawLine(&pen,  75, 225, 100, 250); // m1 r
	graphics.DrawLine(&pen, 175, 225, 150, 250); // m2 l
	graphics.DrawLine(&pen, 100, 250, 150, 250); // m3 m
	/*
	   | |
	 \_____/
	*/
}