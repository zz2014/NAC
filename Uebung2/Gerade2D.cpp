#include "Gerade2D.h"
#include "Vector2D.h"
#include <Math.h>

Gerade2D::Gerade2D(Vector2D n) :m_Normale(n), m_Aufpunkt(Vector2D(0,0))
{
}

float Gerade2D::gerichteterAbstand(Vector2D x) const{
	float result = 0.0;
	x.sub(m_Aufpunkt);
	
	result = (m_Normale.nom()).skalarprodukt(x);
	return result;
}
bool Gerade2D::aufGerade(Vector2D&x) const{
	if (fabs(gerichteterAbstand(x)) == 0)
		return true;
	return false;
}

 Vector2D& Gerade2D::aufpunkt()const{
	return m_Aufpunkt;
}
 Vector2D& Gerade2D::normale() const{
	return m_Normale;
}

Gerade2D::~Gerade2D()
{
}
