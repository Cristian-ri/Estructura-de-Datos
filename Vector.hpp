#include<iostream>
using std::cout;
using std::cin;
using std::endl;
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
		void setv(const int);
		void setdim(const int);
		//Funciones miembros get "retornar"
		const int getv()const;
		const int getdim()const;
		//Insertar un elemento al inicio del vector
		Vector pushfront(const Vector &,const int);
				
	private:
		int *v;
		int dim;
		
};
#endif