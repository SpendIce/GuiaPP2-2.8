#include <iostream>
using namespace std;

int vocales(char* vector)
{
    int vocales = 0;
    while(*vector != '\0')
    {
        if (*vector == 'a' || *vector == 'e' || *vector == 'i' || *vector == 'o' || *vector == 'u')
        {
            vocales++;
        }
        vector++;
    }
    return vocales;
}

int main() {
    string palabra = "banana mundo";
    cout << "La palabra " << palabra << " tiene " << vocales(&palabra[0]) << " vocales" << endl;
    return 0;
}
