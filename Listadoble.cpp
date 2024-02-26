#include "Listadoble.hpp"

Listadoble::Listadoble(){
	this->head = nullptr;
	this->tail = nullptr;
}

bool Listadoble::empty(){
	return this->head == nullptr;
}