#include "Nodo.hpp"
#ifndef LISTADOBLE
#define LISTADOBLE

class Listadoble{
	public:
		Listadoble();
		bool empty();
		void Imprimir();
		void pushfront(int);
		void pushback(int);
		int popfront();
		int popback();
	
	private:
		Nodo *head;
		Nodo *tail;
};
#endif