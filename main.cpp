#include <iostream>
#include <string>
#include <cctype>

using namespace std;
struct Punto {
    int x;
    int y;
};

int main() {
    Punto *punto = new Punto;
    punto->x = 1;
    punto->y = 2;
    cout << "Punto: " << punto->x << ", " << punto->y << endl;
    return 0;
}
