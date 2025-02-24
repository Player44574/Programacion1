//Escribe un programa que tome dos números de entrada y imprima por pantalla el mayor de los dos.
#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cout << "Introduce el primer número: ";
    cin >> num1;
    cout << "Introduce el segundo número: ";
    cin >> num2;
    if (num1 > num2) {
        cout << "El número mayor es: " << num1 << endl;
    } else {
        cout << "El número mayor es: " << num2 << endl;
    }
    return 0;
}