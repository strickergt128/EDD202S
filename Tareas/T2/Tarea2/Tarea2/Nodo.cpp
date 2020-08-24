#include "nodo.h"

nodo::nodo(int carne, string nombre)
{
    this->carne = carne;
    this->nombre = nombre;
}

void nodo::setSiguiente(nodo* nodo) {
    this->siguiente = nodo;
}

nodo* nodo::getSiguiente() {
    return this->siguiente;
}

int nodo::getCarne() {
    return this->carne;
}

string nodo::getNombre() {
    return this->nombre;
}

void nodo::imprimir() {
    cout << "\nCarne: " << this->carne;
    cout << "\nNombre: " << this->nombre<<"\n";
}

nodo::~nodo()
{
    cout << "Se destruyo el nodo";
}