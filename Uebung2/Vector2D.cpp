#include "Vector2D.h"

Vector2D::Vector2D():Vector(2)
{
}

Vector2D::Vector2D(float x, float y): Vector(2){
	m_Element[0] = x;
	m_Element[1] = y;
}

void Vector2D::add(Vector2D v) const{
	m_Element[0] = m_Element[0] + v.m_Element[0];
	m_Element[1] = m_Element[1] + v.m_Element[1];

}

void Vector2D::sub(Vector2D v) const{
	m_Element[0] = m_Element[0] - v.m_Element[0];
	m_Element[1] = m_Element[1] - v.m_Element[1];

}
Vector2D Vector2D::nom() const{
	
	float b = this->betrag();
	Vector2D result(m_Element[0] / b, m_Element[1] / b);
	return result;
}
void Vector2D::kopiereIn(Vector2D *zielvar){
	(*zielvar).m_Element[0] = m_Element[0];
	(*zielvar).m_Element[1] = m_Element[1];
	
}
Vector2D::~Vector2D()
{
}

void tausche(Vector2D *a, Vector2D *b) {
	Vector2D temp;
	a->kopiereIn(&temp);
	b->kopiereIn(a);
	temp.kopiereIn(b);
}