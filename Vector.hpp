#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
#ifndef VECTOR
#define VECTOR

class Vector{
	public:
		//Constructor
		Vector(const int);
		//Vector inicializado
		Vector();
		//Mostrar vector
		Vector imprimir();
		//Funciones miembros set "obtener"
		void setV(const int);
		void setDim(const int);
		//Funciones miembros get "retornar"
		const int getV()const;
		const int getDim()const;
		//función que permita inserta el elemento en una posición.
		
	private:
		int *v;
		int dim;
		
};
#endif