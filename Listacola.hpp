#include "Nodo.hpp"

class Listacola{
	public:
		//Constructor
		Listacola();
		//Funciones Miembro
		bool empty();
		void _imprimir();
		void pushfront(int);
		void pushback(int);
		int popfront();
		int popback();
	private:
		Nodo *head;
		Nodo *tail;
		
};
