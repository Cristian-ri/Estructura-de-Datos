#include "Nodo.hpp"
#ifndef LISTA
#define LISTA

class Lista{
	public:
		//Constructor por defecto
		Lista();
		//Funciones miembros
		//Funcion ingresa un dato por enfrente de la lista
		virtual void pushfront(int);
		//Muestra la lista
		virtual void imprimir();
		//Ingresar elemento en la parte final de la lista
		virtual void pushback(int);
		//Elimina datos al inicio de la lista
		virtual int popfront();
		//Elimina datos al fian de la lista
		virtual int popback();
		//Verifica si la lista esta vacia
		virtual bool empty();
		
	
	private:
		Nodo *head;	
};
#endif