#include <iostream>
using namespace std;

void invertir(int* vector)
{
    int* inicio = vector;
    int* fin = vector;
    while (*fin != '\0')
    {
        fin++;
    }
    fin--;
    while (inicio < fin)
    {
        int temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        inicio++;
        fin--;
    }
}

int main() {
    int vector[5] = {1, 2, 3, 4, 5};
    invertir(vector);
    for (int i = 0; i < 5; i++)
    {
        cout << vector[i] << endl;
    }
    return 0;
}
