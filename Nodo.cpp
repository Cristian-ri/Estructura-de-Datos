#include "Nodo.hpp"
//Constructor por defecto inicializado
//Para evitar que se llene de datos basura
Nodo::Nodo(){
	this->key = 0;
	this->next = nullptr;
	this->back = nullptr;
}
//Constructor principal inicializado
Nodo::Nodo(int _key){
	this->key = _key;
	this->next = nullptr;
	this->back = nullptr;
}