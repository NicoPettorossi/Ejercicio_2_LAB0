#include "A.h"
#include "Header.h"

A::A(int x){
	this->a = x;
}

int A::getA(){
	return this->a;
}

void A::imprimirA(){
	cout << "N�mero en clase A: " << this->getA() << endl;
}
