#include <iostream>
#include <string>
#include <cctype>

using namespace std;

char* mayusculas(char* entrada, int tam) {
    char* salida = new char[tam];
    for (int i = 0; i < tam; i++) {
        salida[i] = toupper(entrada[i]);
    }
    return salida;
}

int main() {
    char* palabra = new char[10];
    palabra = "hola mundo   ";
    cout << mayusculas(palabra, 10) << endl;
    return 0;
}
