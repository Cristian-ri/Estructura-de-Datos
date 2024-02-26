#include "Lista.hpp"
#include "Listacola.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char** argv){
	//Instanciando un ojeto de la clase lista
	Lista l1;
	Listacola l2;
	//Ingresando keys por enfrente
	l1.pushfront(6);
	l1.pushfront(7);
	l1.pushfront(5);
	l1.pushfront(14);
	l1.pushfront(78);
	//Imprimendo lista
	l1.imprimir();
	cout<<"**********************"<<endl;
	l1.pushback(99);
	l1.imprimir();
	cout<<"**********************"<<endl;
	l1.popfront();
	l1.popfront();
	l1.imprimir();
	l1.empty();
	cout<<"**********************"<<endl;
	l1.popback();
	l1.imprimir();
	cout<<"**********************"<<endl;
	cout<<"Operaciones Lista con cola"<<endl;
	l2.pushfront(34);
	l2.pushfront(23);
	l2.pushfront(56);
	l2._imprimir();
	cout<<"**********************"<<endl;
	l2.pushback(80);
	l2.pushback(85);
	l2._imprimir();
	
}