#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "ingrese N: ";
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            A[i] = 1;
        } else {
            A[i] = 0;
        }
    }
    for (int i = 0; i < N; i++) {
        cout << A[i] << ",";
    }
    return 0;
}
