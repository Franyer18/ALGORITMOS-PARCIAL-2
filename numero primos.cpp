#include <iostream>

 esPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) return false;
    }
    return true;
}

int main() {
    int numero;
    std::cout << "Ingrese un número entero y que sea positivo: ";
    std::cin >> numero;

    if (esPrimo(numero)) {
        std::cout << numero << " este dato es un numero primo." << std::endl;
    } else {
        std::cout << numero << " este dato no es número primo." << std::endl;
    }

    return 0;
}

