#include "Lista.hpp"
#include "Listacola.hpp"
#include "Listadoble.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char** argv){
	//Instanciando un ojeto de la clase lista
	Lista l1;
	Listacola l2;
	Listadoble l3;
	//Ingresando keys por enfrente
	/*l1.pushfront(6);
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
	cout<<"**********************"<<endl;
	l2.popfront();
	l2.popfront();
	l2._imprimir();
	cout<<"**********************"<<endl;
	l2.popback();
	l2.popback();
	l2._imprimir();*/
	
	l3.pushfront(100);
	l3.pushfront(105);
	l3.pushfront(110);
	l3.pushfront(115);
	l3.Imprimir();
	cout<<"**********************"<<endl;
	l3.pushback(120);
	l3.pushback(125);
	l3.Imprimir();
	
	return 0;	
}