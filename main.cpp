#include <iostream>
using namespace std;
int main() {
    int var = 8;
    int *ptr = &var;
    cout << "var = " << var << endl;
    *ptr = 10;
    cout << "var = " << var << endl;
    return 0;
}
