#include "B.h"
#include "Header.h"

B::B(int x){
	this->b = x;
}

int B::getB(){
	return this->b;
}

void B::imprimirB(){
	cout << "Número en clase B: " << this->getB() << endl;
}
