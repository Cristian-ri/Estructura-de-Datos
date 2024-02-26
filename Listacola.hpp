#include "Nodo.hpp"

class Listacola{
	public:
		//Constructor
		Listacola();
		//Funciones Miembro
		void _imprimir();
		void pushfront(int);
		void pushback(int);
	private:
		Nodo *head;
		Nodo *tail;
		
};
