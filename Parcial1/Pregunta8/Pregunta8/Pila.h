#pragma once
#include "Nodo.h"

class Pila
{
public:
	Pila();
	void pushCadena(string cadena);
	string pop();
	~Pila();

private:
	Nodo* cabeza;
	void push(string valor);
};
