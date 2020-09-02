#include "Nodo.h"
#include <iostream>
using namespace std;

Nodo::Nodo(string valor)
{
	this->valor = valor;
	this->siguiente = NULL;
}

Nodo* Nodo::getSiguiente() {
	return this->siguiente;
}

void Nodo::setSiguiente(Nodo* siguiente) {
	this->siguiente = siguiente;
}

string Nodo::getValor() {
	return this->valor;
}

Nodo::~Nodo()
{
}