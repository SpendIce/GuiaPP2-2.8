#include <iostream>
#include <string>
#include <cctype>

using namespace std;
//Crea una función que tome una estructura Círculo (con miembro radio) como argumento y
//calcule su área. Luego, usa esta función para calcular y mostrar el área de varios círculos.
struct Circulo {
    float radio;
};
float areaCirculo(Circulo circulo) {
    return 3.1416 * circulo.radio * circulo.radio;
}

int main() {
    Circulo *circulo1 = new Circulo;
    circulo1->radio = 5.2;
    cout << "El area del circulo es: " << areaCirculo(*circulo1) << endl;
    circulo1->radio = 10.4;
    cout << "El area del circulo es: " << areaCirculo(*circulo1) << endl;
    circulo1->radio = 2.4;
    cout << "El area del circulo es: " << areaCirculo(*circulo1) << endl;
    return 0;
}
