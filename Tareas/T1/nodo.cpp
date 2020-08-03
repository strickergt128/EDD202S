#include <iostream>
using namespace std;

class nodo
{
private:
    int carne;
    string nombre;
    nodo* siguiente;
public:
    nodo(int carne,string nombre);
    void setSiguiente(nodo* nodo);
    nodo* getSiguiente();
    int getCarne();
    string getNombre();
    void imprimir();
    ~nodo();
};

nodo::nodo(int carne, string nombre)
{
    this->carne = carne;
    this->nombre = nombre;
}

void nodo::setSiguiente(nodo* nodo){
    this->siguiente = nodo;
}

nodo* nodo::getSiguiente(){
    return this->siguiente;
}

int nodo::getCarne(){
    return this->carne;
}

string nodo::getNombre(){
    return this->nombre;
}

void nodo::imprimir(){
    cout<<"Carne: "<<this->carne;
    cout<<"Nombre: "<<this->nombre;
}

nodo::~nodo()
{
    cout<<"Se destruyo el nodo";
}
