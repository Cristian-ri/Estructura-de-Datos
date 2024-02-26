#include "ListaCola.hpp"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

Listacola::Listacola(){
	this->head = 0;
	this->tail = 0;
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
	if(head == NULL){
		cout<<"La listacola esta vacia"<<endl;
	}
	
	Nodo *nuevonodo = new Nodo(_key);
	nuevonodo->next = this->tail;
	this->tail = nuevonodo;
	
	if(this->tail != this->head){
		nuevonodo = this->tail;
		this->tail = this->head;
	}
	
}
