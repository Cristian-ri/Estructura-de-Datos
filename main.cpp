#include "Vector.hpp"

int main(int argc, char** argv){
	Vector v1(3);
	//v1.imprimir();
	//v2.imprimir();
//	v3.imprimir();
	cout<<"****************************"<<endl;
	v1.pushfront(v1,5);
	v1.pushfront(v1,8);
	v1.pushfront(v1,10);
	v1.imprimir();
	return 0;
}