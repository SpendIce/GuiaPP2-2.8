#include <iostream>
using namespace std;

void orden(string *vector) {
    string aux;
    for (int i = 1; i < vector->length()+1; i++) {
        if (vector[i][0] < vector[i-1][0]) {
            aux = vector[i];
            vector[i] = vector[i-1];
            vector[i-1] = aux;
            i = 0;
        }
    }
}

int main() {
    string *vector = new string[5];
    string pal1 = "hola";
    string pal2 = "mundo";
    string pal3 = "como";
    string pal4 = "estas";
    string pal5 = "hoy";
    vector[0] = pal1;
    vector[1] = pal2;
    vector[2] = pal3;
    vector[3] = pal4;
    vector[4] = pal5;
    orden(vector);
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < vector[i].length(); j++)
        {
            cout << vector[i][j];
        }
        cout << endl;
    }
    return 0;
}
