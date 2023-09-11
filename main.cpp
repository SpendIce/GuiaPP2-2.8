#include <iostream>
#include <string>
#include <cctype>

using namespace std;
//Crea una estructura Producto con miembros nombre, precio y cantidad. Luego, crea un
//puntero a Producto, asigna valores a través del puntero y muestra los datos del producto
struct Producto {
    string nombre;
    float precio;
    int cantidad;
};

int main() {
    Producto *pProducto = new Producto;
    pProducto->nombre = "Coca Cola";
    pProducto->precio = 1.5;
    pProducto->cantidad = 5;
    cout << "Nombre: " << pProducto->nombre << endl;
    cout << "Precio: " << pProducto->precio << endl;
    cout << "Cantidad: " << pProducto->cantidad << endl;
    delete pProducto;
    return 0;
}
