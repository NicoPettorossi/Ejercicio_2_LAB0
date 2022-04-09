#include "C.h"
#include "Header.h"

C::C(int x){
	this->c = x;
}

int C::getC(){
	return this->c;
}

void C::imprimirC(){
	cout << "Numero en clase C: " << this->getC() << endl;
}
