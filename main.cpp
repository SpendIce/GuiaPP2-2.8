#include <iostream>
#include <string>
#include <cctype>

using namespace std;
struct Empleado {
    string nombre;
    string departamento;
    float salario;
};
int salarioPromedio(Empleado* empleados, int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += empleados[i].salario;
    }
    return suma / n;
}
int main() {
    Empleado empleados[3];
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese el nombre del empleado " << i + 1 << ": ";
        getline(cin, empleados[i].nombre);
        cout << "Ingrese el departamento del empleado " << i + 1 << ": ";
        getline(cin, empleados[i].departamento);
        cout << "Ingrese el salario del empleado " << i + 1 << ": ";
        cin >> empleados[i].salario;
        cin.ignore();
    }
    cout << "El salario promedio es: " << salarioPromedio(empleados, 3) << endl;
    return 0;
}
