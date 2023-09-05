#include <iostream>
using namespace std;
void swap(int* const p1, int* const p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int* vectorDePares(int n) {
    int *vector = new int[n]; // Asignar memoria dinámica para el arreglo
    for (int i = 0, par = 2; i < n; i++, par+=2) {
        vector[i] = par; // Llenar el arreglo con números pares
    }
    return vector;
}
int main() {
    int num = 10;
    int *pares = vectorDePares(num);
    for (int i = 0; i < num; i++) {
        cout << pares[i] << " ";
    }
    return 0;
}
