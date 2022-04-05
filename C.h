#ifndef C_H
#define C_H

#include "Header.h"

class B;

class C{
	
private:
	B * myB;
	int c;
public:
	C(int z);
	int getC();
	void setC(int);
	void imprimirC();
	~C();
	
};
	
#include "B.h"

#endif
