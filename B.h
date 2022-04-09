#ifndef B_H
#define B_H

//forward declarations
class A;
class C;

//declaracion normal
class B{
	
private:
	A * myA;
	C * myC;
	int b;
public:
	B(int y);
	int getB();
	void imprimirB();
	~B();
	
};

#include "A.h"
#include "C.h"

#endif
