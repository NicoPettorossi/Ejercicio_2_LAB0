#include "B.h"

B::B(int x){
	this->b = x;
}

int B::getB(){
	return this->b;
}

void B::imprimirB(){
	cout << "N�mero en clase B: " << this->getB() << endl;
}
