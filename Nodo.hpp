#ifndef NODO
#define NODO
//Clase autoreferenciada
class Nodo{
	public:
		//Funiones miembros de la clase
		Nodo(); //Constructor por defecto
		Nodo(int); //Sobrecargando constructor
		friend class Lista;
		friend class Listacola;
	private:
		int key;
		Nodo *back;
		Nodo *next;
};
#endif