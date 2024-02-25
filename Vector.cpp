#include "Vector.hpp"
//Constructor

Vector::Vector(){
	this->dim = 0;
	this->v = 0;
}

Vector::Vector(const int D){
	this->dim = D;
	//Creando memoria dinamica.
	v= new int[dim];
	for(int i=0; i<this->dim; i++){
		this->v[i] = 0 + rand()%11;
	}	
}

void Vector::setDim(const int D){
	this->dim=D;	
}

const int Vector::getDim()const{
	return this->dim;
}

const int Vector::getV()const{
	return this->dim;
}

void Vector::setV(const int Vv){
	this->dim=Vv;
}

Vector Vector::imprimir(){
	int aux = 0;
	cout<<"[";
	for(int i=0; i<this->dim; i++){
		cout<<this->v[i];
		if(i!=this->dim-1){
			cout<<",";
		}
	}
	cout<<"]"<<endl;
	return aux;
}