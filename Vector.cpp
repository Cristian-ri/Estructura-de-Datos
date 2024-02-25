#include "Vector.hpp"

// Constructor
Vector::Vector() {
    this->dim = 0;
    this->v = nullptr;
}

Vector::Vector(const int D) {
    this->dim = D;
}

void Vector::setdim(const int D) {
    this->dim = D;
}

const int Vector::getdim() const {
    return this->dim;
}

const int Vector::getv() const {
    return this->dim; 
}

void Vector::setv(const int _v) {
    this->dim = _v;
}

Vector Vector::imprimir() {
    int m = 0;
    cout << "[";
    for (int i = 0; i < this->dim; i++) {
        cout << this->v[i];
        if (i != this->dim - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
    return m;
}

Vector Vector::pushfront(const Vector &v1, const int _dato) {
    Vector *v2 = new Vector(v1.getdim() + 1);
    v2[0] = _dato;
    for (int i = 0; i < v1.getdim(); i++) {
        v2->v[i + 1] = v1.v[i];
    }
    v2[0] = _dato;
    return *v2;
}
