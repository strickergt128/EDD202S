#include <iostream>
#include "Lista.h"
#include "Nodo.h"
using namespace std;

void clonar() {

}


int main() {
	nodo* a, * b, * c;
	a = new nodo(1,"Dilan");
	b = new nodo(2,"David");
	c = new nodo(3,"Alejandro");
	lista* lista1 = new lista();
	lista* listaClonanda = new lista();
	lista1->insertar(a);
	lista1->insertar(b);
	lista1->insertar(c);
	lista1->imprimirLista();
	listaClonanda = lista1->clonar();
	listaClonanda->imprimirLista();
	return 0;
}