#include "C.h"

C::C(int x){
	this->c = x;
}

int C::getC(){
	return this->c;
}

void C::imprimirC(){
	cout << "Número en clase C: " << this->getC() << endl;
}
