#include <iostream>
using namespace std;
void print(void* p, string type) {
    if(type == "int")
        cout << *(int*)p << endl;
    else if(type == "string")
        cout << *(string*)p << endl;
}
int main() {
    int num = 10;
    string str = "Hello";
    void* p = &num;
    print(p, "int");
    p = &str;
    print(p, "string");
    return 0;
}
