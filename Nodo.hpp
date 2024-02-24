#ifndef METODOSNUMERICOS
#define METODOSNUMERICOS
class Nodo{
	public:
		Nodo(); //Constructor por defecto
		Nodo(int); //Sobrecargando constructor
	private:
		int key;
		Nodo *next;

	friend class Lista;
};
#endif