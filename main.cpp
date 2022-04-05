#include "Header.h"
#include "A.h"
#include "B.h"
#include "C.h"

int main (int argc, char *argv[]) {
	
	A * a = new A(1);
	B * b = new B(2);
	C * c = new C(3);
	
	a->imprimirA();
	b->imprimirB();
	c->imprimirC();
	
	return 0;
}

