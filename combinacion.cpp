#include <iostream>
#include "combinacion.h"

void calcularCombinacion(int cantidad) {
    int denominaciones[10] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    int cantidades[10] = {0};

    for (int i = 0; i < 10; i++) {
        cantidades[i] = cantidad / denominaciones[i];
        cantidad %= denominaciones[i];
    }

    for (int i = 0; i < 10; i++) {
        std::cout << denominaciones[i] << " : " << cantidades[i] << std::endl;
    }

    std::cout << "Faltante: " << cantidad << std::endl;
}
