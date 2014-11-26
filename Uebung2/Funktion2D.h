#pragma once
#include "Vector2D.h"
class Funktion2D
{
public:
	Funktion2D();
	virtual ~Funktion2D();
	float operator ()(Vector2D)const;
};

Vector2D gradient2D(Funktion2D, Vector2D);
Vector2D minimieren2D(Funktion2D, Vector2D, float, float=0.0001, float=0.0001);
