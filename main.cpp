#include <iostream>
#include "combinacion.h"

using namespace std;

int main() {
    int cantidad;

    cout << "Ingrese la cantidad de dinero: ";
    cin >> cantidad;

    calcularCombinacion(cantidad);

    return 0;
}
