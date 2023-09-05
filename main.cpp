#include <iostream>
using namespace std;

int main() {
    int *p = new int[5] {1, 2, 3, 4, 5};
    int suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += *p;
        p++;
    }
    cout << "Suma: " << suma << endl;
    return 0;
}
