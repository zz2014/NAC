#include "Vector.h"
#include <cmath>
#include <limits>
#ifndef VECTOR_83492
#define VECTOR_83492
# define M_PI 3.14159265358979323846  /* pi */
Vector::Vector(int m) : Matrix(m,1)
{

}


Vector::~Vector()
{
}

float Vector::skalarprodukt(Vector v) const{
	if (v.m_Spalten!= m_Spalten|| v.m_Zeilen!=m_Zeilen)
		return std::numeric_limits<float>::quiet_NaN();
	float result = 0.0;
	for (int i = 0; i < m_Spalten*m_Zeilen; i++)
		result = result + m_Element[i] * v.m_Element[i];
	return result;
}

float Vector::betrag() const{
	/*float result = 0.0;
	for (int i = 0; i < m_Spalten*m_Zeilen; i++)
		result = result + m_Element[i]*m_Element[i];
	return sqrt(result);*/
	return sqrt(skalarprodukt(*this));
}

float Vector::winkel(Vector v) const{
	if (v.m_Spalten != m_Spalten || v.m_Zeilen != m_Zeilen)
		return std::numeric_limits<float>::quiet_NaN();
	float result = 0.0;
	result = betrag()*(v.betrag());
	result = skalarprodukt(v) / result;
	result = acos(result)/M_PI*180;
	return result;
}
#endif
