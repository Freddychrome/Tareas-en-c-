#include <iostream>
using namespace std;

int main () {
    int A[5] = {10, 20, 50, 40, 30};
    int buscar = 50;
    int indice = -1;
    for(int i = 0; i < 5; i++) {
        if (A[i] == buscar) {
            indice = i;
        }
    }
    if (indice != -1) {
        cout << "elemento mayor encontrado en la posición: " << indice;
    } else {
        cout << "no se encontro";
    }
    return 0;
}
