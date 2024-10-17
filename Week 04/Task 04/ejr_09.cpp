#include <iostream>
#include <vector>

using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) return false; // 0 y 1 no son primos
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false; // Si es divisible, no es primo
    }
    return true; // Es primo
}

int main() {
    int inicio, fin;

    // Solicitar al usuario los límites del rango
    cout << "Ingrese el número inicial: ";
    cin >> inicio;
    cout << "Ingrese el número final: ";
    cin >> fin;

    vector<int> primos;

    // Generar números primos en el rango
    for (int i = inicio; i <= fin; ++i) {
        if (!esPrimo(i)) {
            continue; // Si no es primo, continuar con el siguiente
        }
        primos.push_back(i); // Agregar el número primo al vector
    }

    // Imprimir los números primos encontrados
    cout << "Números primos en el rango [" << inicio << ", " << fin << "]: ";
    for (int primo : primos) {
        cout << primo << " ";
    }
    cout << endl;

    return 0;
}
