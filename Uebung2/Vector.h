#ifndef Vector_9838266
#define Vector_9838266
#include "Matrix.h"
class Vector :
	public Matrix
{
public:
	Vector(int);
	virtual ~Vector();
	float betrag() const;
	float skalarprodukt(Vector)const;
	float winkel(Vector)const;
};
#endif
