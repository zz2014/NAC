#ifndef MY_VECTOR2D_HEADER_
#define MY_VECTOR2D_HEADER_
#include "Vector.h"
class Vector2D :
	public Vector
{
public:
	Vector2D(float, float);
	Vector2D();
	virtual ~Vector2D();
	void add(Vector2D v) const;
	void sub(Vector2D) const;
	Vector2D nom()const;
	void kopiereIn(Vector2D *zielvar);
};
void tausche(Vector2D*, Vector2D*);
#endif

