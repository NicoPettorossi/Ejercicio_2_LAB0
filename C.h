#ifndef C_H
#define C_H

class A;
class B;

class C{
	
private:
	A * myA;
	B * myB;
	int c;
public:
	C(int z);
	int getC();
	void imprimirC();
	~C();
	
};

#include "A.h"
#include "B.h"

#endif
