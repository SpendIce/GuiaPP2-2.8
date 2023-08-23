#include <iostream>
using namespace std;
int main() {
    int var[5] = {0, 1, 2, 3, 4};
    int *ptr = var;
    cout << "var = " << *ptr << endl;
    ptr++;
    cout << "var = " << *ptr << endl;
    return 0;
}
