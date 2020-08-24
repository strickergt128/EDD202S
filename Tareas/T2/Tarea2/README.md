# Tarea 2
```
lista* lista::clonar() {
    lista* clon = new lista();
    nodo* aux = this->head;

    while (aux != NULL)
    {
        int carne = aux->getCarne();
        string nombre = aux->getNombre();
        nodo* nodoClon = new nodo(carne,nombre);
        clon->insertar(nodoClon);
        aux = aux->getSiguiente();
    }

    return clon;
}
```
