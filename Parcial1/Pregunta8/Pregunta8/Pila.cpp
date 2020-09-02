#include "Pila.h"

Pila::Pila()
{
	this->cabeza = NULL;
}

void Pila::pushCadena(string cadena)
{
    
}

void Pila::push(string valor)
{
    Nodo* nuevo = new Nodo(valor);
    nuevo->setSiguiente(this->cabeza);
    this->cabeza = nuevo;
}

string Pila::pop()
{
    if (this->cabeza == NULL) { return NULL; }
    Nodo* aux = this->cabeza;
    this->cabeza = this->cabeza->getSiguiente();
    string valor = aux->getValor();
    delete aux;
    return valor;
}

Pila::~Pila()
{
    Nodo* aux = this->cabeza;
    Nodo* tmp;
    while (aux != NULL) {
        tmp = aux->getSiguiente();
        delete (aux);
        aux = tmp;
    }
}