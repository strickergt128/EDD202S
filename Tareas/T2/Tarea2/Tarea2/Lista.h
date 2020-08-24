#include <iostream>
#include "Nodo.h"
using namespace std;

class lista
{
private:
    nodo* head, * tail;
public:
    lista();
    void insertar(nodo* nuevoNodo);
    void eliminar(int carne);
    void buscar(int carne);
    void imprimirLista();
    lista* clonar();
    ~lista();
};