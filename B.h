#ifndef B_H
#define B_H

#include "Header.h"

class A;

class B{
	
private:
	A * myA;
	int b;
public:
	B(int y);
	int getB();
	void setB(int);
	void imprimirB();
	~B();
	
};

#include "A.h"

#endif
