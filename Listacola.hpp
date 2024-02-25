#include "Nodo.hpp"
#include "Lista.hpp"
#ifndef LISTACOLA
#define LISTACOLA
class Listacola : public Lista{
	public:
		//Constructor
		Listacola();
		//Funciones Miembro
		void imprimir();
		void pushfront(int);
		void pushback(int);
	
	private:
		Nodo *tail;
};
#endif