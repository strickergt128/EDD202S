#include <iostream>
#include "nodo.cpp"
using namespace std;

class lista
{
private:
    nodo* head, *tail;
public:
    lista();
    void insertar(nodo* nuevoNodo);
    void eliminar(int carne);
    void buscar(int carne);
    void imprimirLista();
    ~lista();
};

lista::lista()
{
    this->head = NULL;
    this->tail = NULL;
}

void lista::insertar(nodo* nuevoNodo){
    if (this->head == NULL)
    {
        this->head = nuevoNodo;
        this->tail = nuevoNodo;
    }else
    {
        this->tail->setSiguiente(nuevoNodo);
        this->tail = nuevoNodo;
    }
}

void lista::eliminar(int carne){
    if (this->head == NULL)
    {
        cout<<"Esta Vacio";

    }else
    {
        nodo* anterior, *aux;
        aux = this->head;
        anterior = aux;

        while (aux != NULL)
        {
            if (aux->getCarne() == carne)
            {
                anterior->setSiguiente(aux->getSiguiente());
                if (this->head == aux)
                {
                    this->head = aux->getSiguiente();
                }else if (this->tail == aux)
                {
                    this->tail = anterior;
                }
                
                
                aux->setSiguiente(NULL);
                delete aux;
                break;
            }

            anterior = aux;
            aux = aux->getSiguiente();
            
        }
        
        
    }
    
    
}

void lista::buscar(int carne){
    nodo* aux;
    aux = this->head;

    while (aux != NULL)
    {
        if (aux->getCarne() == carne)
        {
            cout<<"Encontrado: "<<aux->getNombre();
        }
        
        aux = aux->getSiguiente();

    }
    
}

void lista::imprimirLista(){
    
}

lista::~lista()
{
}
