//Escribe un programa que tome un número de entrada e imprima por pantalla si es par o impar.
#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Introduce un número: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "El número es par" << endl;
    } else {
        cout << "El número es impar" << endl;
    }
    return 0;
}