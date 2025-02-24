//Ejercicio 1: Escriba un programa que pida al usuario su edad y muestre su edad en meses.
#include <iostream>

using namespace std;

int main() {
    int edad;
    cout << "¿Cuántos años tienes?: ";
    cin >> edad;
    cout << "Su edad en meses es: " << edad * 12 << endl;
    return 0;
}