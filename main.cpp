#include <iostream>
#include <string>
#include <cctype>

using namespace std;
//Declara un arreglo de punteros a estructuras Estudiante y llena el arreglo con información
//de tres estudiantes. Luego, muestra los datos de todos los estudiantes utilizando los
//punteros
struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

int main() {
    Estudiante *ptrEstudiante[3] = {nullptr, nullptr, nullptr};
    Estudiante estudiante1 = {"Juan", 20, 9.5};
    Estudiante estudiante2 = {"Maria", 19, 9.0};
    Estudiante estudiante3 = {"Pedro", 21, 8.5};
    ptrEstudiante[0] = &estudiante1;
    ptrEstudiante[1] = &estudiante2;
    ptrEstudiante[2] = &estudiante3;
    for (int i = 0; i < 3; i++) {
        cout << "Nombre: " << ptrEstudiante[i]->nombre << endl;
        cout << "Edad: " << ptrEstudiante[i]->edad << endl;
        cout << "Promedio: " << ptrEstudiante[i]->promedio << endl;
    }
    return 0;
}
