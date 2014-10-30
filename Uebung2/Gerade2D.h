#ifndef __Gerade2D_h__
#define __Gerade2D_h__
#include "Vector2D.h"
class Gerade2D
{
private:
	 Vector2D m_Normale;
	 Vector2D m_Aufpunkt;

public:
	Gerade2D(Vector2D);
	float gerichteterAbstand(Vector2D) const;
	virtual ~Gerade2D();
	bool aufGerade(Vector2D&) const;
	Vector2D& normale() const ;
	Vector2D& aufpunkt() const;

};
#endif // __Gerade2D_h__