#include "Lista.hpp"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

Lista::Lista(){
	this->head = 0;
}

void Lista::imprimir(){
	Nodo *iterador;
	iterador = this->head;
	
	while(iterador != NULL){
		cout<<iterador->key<<endl;
		iterador = iterador->next;
	}
}

void Lista::pushfront(int _key){
	//Crando un nodo O(1)
	Nodo *nuevoNodo = new Nodo(_key);
	//NuevoNodo apuntnado al siguiente O(1)
	nuevoNodo->next = this->head;
	//Nodo head apuntando al primer elemento O(1)
	this->head  = nuevoNodo;
}

int Lista::popfront(){
    if (head==NULL)
   {
    cout<<"la lista esta vacia"<<endl;
   }
   int dato = head->key;
   this->head = head->next;
   return dato;
}

void Lista::pushback(int _key){
	//Creando el nuevo nodo con memoria dinamica 
	Nodo *nuevoNodo  = new Nodo(_key);
	//Creando el nodo auxiliar o iterador
	Nodo *iterador  = this->head;
	/*La condicion se agrega para tomar el caso 
	que la lista solo tenga un elemento o este vacia*/

	if(head != NULL){
		//Buscar el ultimo elemento o nodo O(1)
		while(iterador->next != NULL){
			//Esta operacion O(1)
			iterador = iterador->next;
		}
		//Al salir del while, se encuentra el último.
		iterador->next = nuevoNodo;
	}
}

int Lista::popback(){
	Nodo *iterador  = this->head;
	Nodo *aux;
	int dato = 0;
	/*La condicion se agrega para tomar el caso 
	que la lista solo tenga un elemento o este vacia*/
	if(head != NULL){
		//Buscar el ultimo elemento o nodo O(1)
		while(iterador->next != NULL){
			//Esta operacion O(1)
			aux = iterador;
			iterador = iterador->next;
			dato = iterador->key;
		}
	} 
	aux->next = NULL;
	return dato;
}

bool Lista::empty(){
	return this->head == 0;
}