#include <iostream>
using namespace std;

int main () {
    const int f = 3, c = 3;
    int matriz[f][c] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int suma = 0;
    for(int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            suma += matriz[i][j];
        }
    }
    cout << suma << endl;
    return 0;
}
