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
    Persona* personas = new Persona[3];
    personas[0].nombre = "Juan";
    personas[0].fechaNacimiento.dia = 1;
    personas[0].fechaNacimiento.mes = 1;
    personas[0].fechaNacimiento.anio = 2000;
    personas[1].nombre = "Pedro";
    personas[1].fechaNacimiento.dia = 2;
    personas[1].fechaNacimiento.mes = 2;
    personas[1].fechaNacimiento.anio = 2001;
    personas[2].nombre = "Maria";
    personas[2].fechaNacimiento.dia = 3;
    personas[2].fechaNacimiento.mes = 3;
    personas[2].fechaNacimiento.anio = 2002;
    for (int i = 0; i < 3; i++) {
        cout << "Nombre: " << personas[i].nombre << endl;
        cout << "Fecha de nacimiento: " << personas[i].fechaNacimiento.dia << "/" << personas[i].fechaNacimiento.mes << "/" << personas[i].fechaNacimiento.anio << endl;
    }
    return 0;
}
