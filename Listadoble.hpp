#include "Nodo.hpp"
#ifndef LISTADOBLE
#define LISTADOBLE

class Listadoble{
	public:
		Listadoble();
		bool empty();
		
	
	private:
		Nodo *head;
		Nodo *tail;
};
#endif