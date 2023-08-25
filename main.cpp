#include <iostream>
using namespace std;
void swap(int* const p1, int* const p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int num = 10;
    int num2 = 20;
    cout << "a: " << num << " b: " << num2 << endl;
    swap(&num, &num2);
    cout << "a: " << num << " b: " << num2 << endl;
    return 0;
}
