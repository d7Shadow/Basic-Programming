#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    
    // Solicitar al usuario que ingrese una palabra
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    bool esPalindromo = true; // Variable para verificar si es palíndromo
    int longitud = palabra.length();

    // Comparar caracteres desde el inicio y el final
    for (int i = 0; i < longitud / 2; i++) {
        if (palabra[i] != palabra[longitud - 1 - i]) {
            esPalindromo = false; // No es un palíndromo
            break; // Salir del bucle
        }
    }

    // Mostrar el resultado
    if (esPalindromo) {
        cout << "La palabra \"" << palabra << "\" es un palíndromo." << endl;
    } else {
        cout << "La palabra \"" << palabra << "\" no es un palíndromo." << endl;
    }

    return 0;
}
