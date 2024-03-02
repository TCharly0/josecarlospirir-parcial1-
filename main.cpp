#include <iostream>
using namespace std;
int main() {
    int a = 0;
    int b = 0;
    int i = 0;

    while (i <= 50) {
        if (i % 2 == 0) {
            b += i;
        } else {
            a += i;
        }
        i++;
    }

    cout << "La suma de los numeros impares de 0 a 50 es: " << a << endl;
    cout << "La suma de los numeros pares de 0 a 50 es: " << b << endl;

    return 0;
}

