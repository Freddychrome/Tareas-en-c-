#include <iostream>
using namespace std;

int main () {
    int A[5] = {10, 20, 50, 40, 60};
    int menor = A[0];
    int mayor = A[0];
    int suma = 0;
    
    for(int i = 0; i < 5; i++) {
        if (A[i] < menor) {
            menor = A[i];
        }
        if (A[i] > mayor) {
            mayor = A[i];
        }
    }
    suma = menor + mayor;
    cout << "el menor numero del vector es: " << menor << endl;
    cout << "el mayor numero del vector es: " << mayor << endl;
    cout << "la suma de ambos es: " << suma << endl;
    return 0;
}
