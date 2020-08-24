#pragma once
#include <iostream>
using namespace std;

class nodo
{
private:
    int carne;
    string nombre;
    nodo* siguiente;
public:
    nodo(int carne, string nombre);
    void setSiguiente(nodo* nodo);
    nodo* getSiguiente();
    int getCarne();
    string getNombre();
    void imprimir();
    ~nodo();
};