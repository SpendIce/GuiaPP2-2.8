#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int suma(int *a, int *b)
{
    return *a + *b;
}
int resta(int *a, int *b)
{
    return *a - *b;
}
int multiplicacion(int *a, int *b)
{
    return *a * *b;
}
int division(int *a, int *b)
{
    if(*b != 0)
        return *a / *b;
    else
        cout << "No se puede dividir entre 0" << endl;
    return 0;
}
int main() {
    int a = 5, b = 3;
    int (*funcionOperacion)(int*, int*);
    funcionOperacion = suma;
    cout << "Suma: " << funcionOperacion(&a, &b) << endl;
    funcionOperacion = resta;
    cout << "Resta: " << funcionOperacion(&a, &b) << endl;
    funcionOperacion = multiplicacion;
    cout << "Multiplicacion: " << funcionOperacion(&a, &b) << endl;
    funcionOperacion = division;
    cout << "Division: " << funcionOperacion(&a, &b) << endl;
    return 0;
}
