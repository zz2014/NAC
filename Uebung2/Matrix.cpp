#include "Matrix.h"
#include <iostream>

/*Matrix::Matrix() : m_Zeilen(2), m_Spalten(1)
{
	std::cout << "Standard Constructor" << std::endl;
	m_Element[0] = 0;
	m_Element[1] = 0;
}*/

Matrix::Matrix(int m, int n): m_Zeilen(m), m_Spalten(n),
	m_Element(new float[m*n]){

	}

Matrix::~Matrix()
{
	/*std::cout << "matrix" << std::endl;
		ausgabe();
		std::cout << "is destroyed"<<std::endl;*/
}

void Matrix::ausgabe(){
	std::cout << "The matrix is: " << std::endl;
	for (int i = 0; i < m_Zeilen * m_Spalten; i++)
		std::cout <<m_Element[i]<< std::endl;
}
