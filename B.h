#ifndef B_H
#define B_H


class A;
class C;

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
