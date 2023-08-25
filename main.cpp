#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* const p = &num;
    cout << *p << endl;
    *p = 20;
    cout << *p << endl;
    int const n2 = 30;
    int* p2 = &n2;
    cout << *p2 << endl;
    *p2 = 40;
    cout << *p2 << endl;
    return 0;
}
