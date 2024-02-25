#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#ifndef NODO
#define NODO
//Clase autoreferenciada
class Nodo{
	public:
		//Funiones miembros de la clase
		Nodo(); //Constructor por defecto
		Nodo(int); //Sobrecargando constructor
		friend class Lista;
	private:
		int key;
		Nodo *next;
};
#endif