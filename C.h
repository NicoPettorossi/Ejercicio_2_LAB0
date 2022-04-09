#ifndef C_H
#define C_H

//forward declarations
class A;
class B;

//declaración normal
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
//includes
#include "A.h"
#include "B.h"

#endif
