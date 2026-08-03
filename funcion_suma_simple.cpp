#include <iostream>
using namespace std;

int Suma(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    cout << Suma(a, b);
    return 0;
}
