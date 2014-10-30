#ifndef MATRIX_74893
#define MATRIX_74893

class Matrix
{
protected:
	int m_Zeilen;
	int m_Spalten;
	float *m_Element;
public:
	/*Matrix();*/
	Matrix(int, int);
	virtual ~Matrix();
	void ausgabe();
};

#endif
