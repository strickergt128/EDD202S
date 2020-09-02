#pragma once
#include <iostream>
using namespace std;

class Nodo
{
public:
	Nodo(string valor);
    void setSiguiente(Nodo* siguiente);
    Nodo* getSiguiente();
    string getValor();
	~Nodo();

private:
    string valor;
    Nodo* siguiente;
};