#include <iostream>
#include <string>
#include <cctype>

using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;
};
struct Lista {
    Nodo *inicio;
    Nodo *fin;
};
Lista *newLista() {
    Lista *lista = new Lista;
    lista->inicio = NULL;
    lista->fin = NULL;
    return lista;
}
Nodo *newNodo(int dato) {
    Nodo *nodo = new Nodo;
    nodo->dato = dato;
    nodo->siguiente = NULL;
    return nodo;
}
void insertar(Lista *lista, int dato) {
    Nodo *nodo = newNodo(dato);
    if (lista->inicio == NULL)
    {
        lista->inicio = nodo;
        lista->fin = nodo;
    }
    else
    {
        lista->fin->siguiente = nodo;
        lista->fin = nodo;
    }
}
void eliminar(Lista *lista, int dato) {
    Nodo *aux = lista->inicio;
    Nodo *ant = NULL;
    while (aux != NULL)
    {
        if (aux->dato == dato)
        {
            if (ant == NULL)
                lista->inicio = aux->siguiente;
            else
                ant->siguiente = aux->siguiente;
            delete aux;
            return;
        }
        ant = aux;
        aux = aux->siguiente;
    }
}
void mostrar(Lista *lista) {
    Nodo *aux = lista->inicio;
    while (aux != NULL)
    {
        cout << aux->dato << " ";
        aux = aux->siguiente;
    }
    cout << endl;
}

int main() {
    Lista *lista = newLista();
    insertar(lista, 1);
    insertar(lista, 2);
    insertar(lista, 3);
    insertar(lista, 4);
    insertar(lista, 5);
    mostrar(lista);
    eliminar(lista, 3);
    mostrar(lista);
    eliminar(lista, 1);
    mostrar(lista);
    eliminar(lista, 5);
    mostrar(lista);
    eliminar(lista, 2);
    mostrar(lista);
    eliminar(lista, 4);
    mostrar(lista);
    return 0;
}
