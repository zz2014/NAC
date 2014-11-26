
#include "Funktion2D.h"
#include <math.h>
#include <iostream>

Funktion2D::Funktion2D()
{
}


Funktion2D::~Funktion2D()
{
}

float Funktion2D:: operator()(Vector2D vec)const{
	Vector2D addto(1, 0);
	float betrag = (vec + addto).betrag();
	return -sin(betrag)/betrag;

}
Vector2D gradient2D(Funktion2D func, Vector2D vec)
{
	Vector2D addX(0.001, 0);
	Vector2D addY(0, 0.001);
	float plus = func(vec + addX);
	float minus = func(vec + (addX*(-1.0)));
	float x =(plus-minus)/(2.0*0.001);
	 plus = func(vec + addY);
	 minus = func(vec + (addY*(-1.0)));
	 float y = (plus - minus) / (2.0 * 0.001);
	return Vector2D(x, y);
}

Vector2D minimieren2D(Funktion2D func, Vector2D pos, float stepsize, float tol, float ftol){
	float oldF;
	float newF;
	float diff = 1.0;
	while (diff >= ftol)
	{
		oldF = func(pos);
		Vector2D grad = gradient2D(func, pos);
		if (grad.betrag() < tol){
			std::cout << "Final result is : " << std::endl;
			pos.ausgabe();
			return pos;
		}
		pos = pos + grad*((-1.0)*stepsize);
		newF = func(pos);
		std::cout << "result in between is : " << std::endl;
		pos.ausgabe();
		float diff = newF - oldF;
	}
	std::cout << "Final result is : "  << std::endl;
	pos.ausgabe();
	return pos;

}

