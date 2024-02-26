#include "Listadoble.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

Listadoble::Listadoble(){
	this->head = nullptr;
	this->tail = nullptr;
}

bool Listadoble::empty(){
	return this->head == nullptr;
}

void Listadoble::Imprimir(){
	Nodo *iterador;
	iterador = this->head;
	
	while(iterador != nullptr){
		cout<<iterador->key<<endl;
		iterador = iterador->next;
	}
}

void Listadoble::pushfront(int _key){
	Nodo *nuevonodo = new Nodo(_key);
	nuevonodo->next = this->head;
	this->head = nuevonodo;
	nuevonodo->back = nullptr;
}

void Listadoble::pushback(int _key) {
    if (head == nullptr) {
        cout << "La lista esta vacia" << endl;
    }
    
    Nodo* nuevonodo = new Nodo(_key);
    nuevonodo->key = _key;
    nuevonodo->next = nullptr;
    
    if (this->tail == nullptr) {
        tail = nuevonodo;
        head = nuevonodo;
        nuevonodo->back = nullptr;
    } else {
        nuevonodo->back = tail;
        tail->next = nuevonodo;
        tail = nuevonodo;
    }
}

