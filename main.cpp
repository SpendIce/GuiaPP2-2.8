#include <iostream>
using namespace std;
void swap(int* const p1, int* const p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int suma(int* vector, int tam)
{
    int sum = 0;
    for (int i = 0; i < tam; i++)
    {
        sum += *vector;
        vector++;
    }
    return sum;
}

int main() {
    int vector[5] = { 1,2,3,4,5 };
    int* p = vector;
    cout << "Suma: " << suma(p, 5) << endl;
    return 0;
}
