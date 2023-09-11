#include <iostream>
#include <string>
#include <cctype>

using namespace std;
struct Estudiante {
    string nombre;
    int edad;
    int calificacion;
};

int main() {
    Estudiante *estudiante = new Estudiante;
    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, estudiante->nombre);
    cout << "Ingrese la edad del estudiante: ";
    cin >> estudiante->edad;
    cout << "Ingrese la calificacion del estudiante: ";
    cin >> estudiante->calificacion;
    cout << "Nombre: " << estudiante->nombre << endl;
    cout << "Edad: " << estudiante->edad << endl;
    cout << "Calificacion: " << estudiante->calificacion << endl;
    return 0;
}
