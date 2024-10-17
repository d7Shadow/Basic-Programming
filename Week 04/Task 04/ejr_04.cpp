#include <iostream>
using namespace std;

int main() {
    int n;

    // Solicitar al usuario que ingrese un número entero positivo
    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    // Verificar que el número sea positivo
    if (n <= 0) {
        cout << "Por favor, ingrese un número positivo." << endl;
        return 1; // Salir del programa con un código de error
    }

    // Imprimir la secuencia de Collatz
    cout << "Secuencia de Collatz para " << n << ": ";

    while (n != 1) {
        cout << n << " "; // Imprimir el número actual

        // Aplicar las reglas de Collatz
        if (n % 2 == 0) {
            n /= 2; // Si n es par, dividirlo por 2
        } else {
            n = 3 * n + 1; // Si n es impar, multiplicarlo por 3 y sumar 1
        }
    }

    cout << n << endl; // Imprimir el último número (1)

    return 0;
}
