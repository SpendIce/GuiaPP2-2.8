#include <iostream>
using namespace std;

void orden(char* *vector, int tam) {
    char* aux;
    for (int i = 1; i < tam; i++) {
        if (vector[i][0] < vector[i-1][0]) {
            aux = vector[i];
            vector[i] = vector[i-1];
            vector[i-1] = aux;
            i = 0;
        }
    }
}

int main() {
    char* *vector = new char*[5];
    char* pal1 = "hola";
    char* pal2 = "mundo";
    char* pal3 = "como";
    char* pal4 = "estas";
    char* pal5 = "hoy";
    vector[0] = pal1;
    vector[1] = pal2;
    vector[2] = pal3;
    vector[3] = pal4;
    vector[4] = pal5;
    orden(vector, 5);
    for (int i = 0; i < 5; i++) {
        cout << vector[i] << endl;
    }
    return 0;
}
