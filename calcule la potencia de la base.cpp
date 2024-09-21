#include <iostream>
int main() {
    int base, exponente;
    long long resultado = 1; 

    std::cout << "Escribe  la base: ";
    std::cin >> base;
    std::cout << "Escribe el exponente: ";
    std::cin >> exponente;
    
    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }

    std::cout << "El resultado de " << base << " elevado a " << exponente << " es: " << resultado << std::endl;

    return 0;
}
