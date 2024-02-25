#include "Nodo.hpp"
#ifndef LISTA
#define LISTA
class Lista{
	public:
		//Constructor por defecto
		Lista();
		//Funciones miembros
		//Funcion ingresa un dato por enfrente de la lista
		void pushfront(int);
		//Muestra la lista
		void imprimir();
		//Ingresar elemento en la parte final de la lista
		void pushback(int);
		//Elimina datos al inicio de la lista
		int popfront();
		//Elimina datos al fian de la lista
		int popback();
		//Verifica si la lista esta vacia
		bool empty();
		
	
	private:
		Nodo *head;	
};
#endif