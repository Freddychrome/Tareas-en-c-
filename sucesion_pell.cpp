#include <iostream>
using namespace std;

long long pell(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return 2 * pell(n - 1) + pell(n - 2);
}

int main () {
    int terminos = 15;
    cout << "Sucesión de Pell: " << endl;
    for (int i = 0; i < terminos; i++) {
        cout << pell(i) << " ";
    }
    cout << endl;
    return 0;
}
