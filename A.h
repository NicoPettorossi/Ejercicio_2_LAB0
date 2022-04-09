#ifndef A_H
#define A_H
//forward declaration, otra vez
class B;
class C;

class A{
	
private:
	B * myB;
	C * myC;
	int a;
public:
	A(int x);
	int getA();
	void imprimirA();
	~A();
	
};

#endif
