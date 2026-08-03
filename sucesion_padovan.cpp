#include <iostream>
using namespace std;

long long padovan(int n) {
    if (n == 0 || n == 1 || n == 2) return 1;
    return padovan(n - 2) + padovan(n - 3);
}

int main () {
    int terminos = 15;
    cout << "Sucesión de Padovan: " << endl;
    for (int i = 0; i < terminos; i++) {
        cout << padovan(i) << " ";
    }
    cout << endl;
    return 0;
}
