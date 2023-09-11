#include <iostream>
#include <string>
#include <cctype>

using namespace std;
struct Fecha {
    int dia;
    int mes;
    int anio;
};
struct Persona {
    string nombre;
    Fecha fechaNacimiento;
};

int main() {
    Persona* persona1 = new Persona;
    persona1->nombre = "Juan";
    persona1->fechaNacimiento.dia = 1;
    persona1->fechaNacimiento.mes = 4;
    persona1->fechaNacimiento.anio = 2000;
    cout << "Nombre: " << persona1->nombre << endl;
    cout << "Fecha de nacimiento: " << persona1->fechaNacimiento.dia << "/" << persona1->fechaNacimiento.mes << "/" << persona1->fechaNacimiento.anio << endl;
    return 0;
}
