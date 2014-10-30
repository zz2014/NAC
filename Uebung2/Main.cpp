#include <iostream>
#include "Matrix.h"
#include "Vector2D.h"
#include "Gerade2D.h"
int main(){
	//Matrix myMatrix;
	//myMatrix.ausgabe();

	/*Uebung3
	Vector2D a(3, 1), b(1, 2), c;
	c.add(a);
	b.add(c);
	std::cout << "Result is : " << b.betrag() << std::endl;

	Vector2D *z;
	z = new Vector2D(-3, 1);
	Vector2D *w;
	w = new Vector2D();
	a.add(*z);
	std::cout << "Result a.add(*z) is" <<std::endl;
	a.ausgabe();

	w->add(*z);
	std::cout << "Result w.add(*z) is" << std::endl;
	w->ausgabe();

	w->add(b);
	std::cout << "Result w.add(b) is" << std::endl;
	w->ausgabe();

	Vector2D u(1, 2);
	u.kopiereIn(w);
	u.kopiereIn(&a);
	a.ausgabe();
	w->ausgabe();

	tausche(&u,&c);
	u.ausgabe();
	c.ausgabe();*/

	/*Uebung4
	Vector2D a(1, 1), b(-5, 0);
	std::cout << "Result is : " << a.betrag() << std::endl;
	std::cout << "Result is : " << b.skalarprodukt(a) << std::endl;
	std::cout << "Result is : " << a.winkel(b) << std::endl;*/

	/* Uebung5
	Vector2D arrayA[3];
	Vector2D *varr[2];
	varr[0] = new Vector2D(2, 3);
	varr[1] = new Vector2D(-2, 1);
	varr[0]->add(*varr[1]);
	std::cout << "Result is : " << std::endl;
	varr[0]->ausgabe();
	delete[]arrayA;
	delete[]varr; 
	Gerade2D g(Vector2D(-3, -4), Vector2D(0, 0));
	std::cout << "Result is : " << g.gerichteterAbstand(Vector2D(4, 3)) << std::endl;*/

	/*Uebung 6*/
	std::cout << "Result is : " << Gerade2D(Vector2D(-3, -4)).aufGerade(Vector2D(4, -3))<<std::endl;
	Gerade2D test(Vector2D(1, 2));
	test.aufpunkt().ausgabe();
	test.aufpunkt() = Vector2D(3, 3);
	test.aufpunkt().ausgabe();

	test.normale().ausgabe();
	test.normale() = Vector2D(3, 3);
	test.normale().ausgabe();

	return 0;
}