#include "ListaCola.hpp"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

Listacola::Listacola(){
	this->head = nullptr;
	this->tail = nullptr;
}

void Listacola::_imprimir(){
	Nodo *iterador;
	iterador = this->head;
	
	while(iterador != NULL){
		cout<<iterador->key<<endl;
		iterador = iterador->next;
	}
}

void Listacola::pushfront(int _key){
   Nodo *nuevoNodo = new Nodo(_key);
   nuevoNodo->next = this->head;
   this->head  = nuevoNodo;
   /*Enel caso de que solo exista un elemento head y tail
   estarian apuntando al mismo elemento*/
   if(this->tail == NULL){
   		this->tail = head;
   }
}

void Listacola::pushback(int _key){
	//verifica que la lista este vacia
	if(head == nullptr){
		cout<<"La listacola esta vacia"<<endl;
	}
	//1
	Nodo *nuevonodo = new Nodo(_key);
	//2
	nuevonodo->next = nullptr;
	//En el caso de que solo este un elemento
	//en la lista 
	if (this->tail != this->head) {
		//3
        this->tail->next = nuevonodo;
    }

   //4
    this->tail = nuevonodo;
}

bool Listacola::empty(){
	return this->head == nullptr;
}

int Listacola::popfront(){
	if (head==nullptr)
   {
    	cout<<"la lista esta vacia"<<endl;
   }
	int dato = head->key;
   	this->head = head->next;
	return dato;
}

int Listacola::popback(){
	if (head==nullptr)
   {
    	cout<<"la lista esta vacia"<<endl;
   }
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

