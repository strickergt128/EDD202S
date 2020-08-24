# Tarea 2 📋
```C++
lista* lista::clonar() {
    lista* clon = new lista(); //Constante = 1
    nodo* aux = this->head; //Constante = 1

    while (aux != NULL) //Bucle hasta n
    {
        int carne = aux->getCarne(); //Constante = 1
        string nombre = aux->getNombre(); //Constante = 1
        nodo* nodoClon = new nodo(carne,nombre); //Constante = 1
        clon->insertar(nodoClon); //Constante = 1
        aux = aux->getSiguiente(); //Constante = 1
    }

    return clon;
}
```
## Construyendo la Función ⚙️
_**T(n)** = 2+4n_
## Eliminando las constantes
_**T(n)** = n_
_**f(n)** = n_
## Funcion
**O(n)**
