#include <iostream>
#include <string>
using namespace std;

// Función para cifrar la cadena usando el cifrado César
string cifrarCesar(const string &texto, int clave) {
    string resultado = "";

    // Iterar sobre cada carácter en la cadena
    for (char c : texto) {
        // Verificar si el carácter es una letra
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A'; // Determinar la base (mayúscula o minúscula)
            // Cifrar el carácter y asegurarse de que se mantenga en el rango de letras
            resultado += char(int(base + (c - base + clave) % 26));
        } else {
            // Si no es letra, agregar el carácter sin cambios
            resultado += c;
        }
    }
    return resultado;
}

int main() {
    string cadena;
    int clave;

    // Solicitar al usuario que ingrese una cadena
    cout << "Ingrese una cadena: ";
    getline(cin, cadena); // Permite ingresar cadenas con espacios

    // Solicitar al usuario que ingrese la clave
    cout << "Ingrese la clave (número de desplazamiento): ";
    cin >> clave;

    // Cifrar la cadena
    string resultado = cifrarCesar(cadena, clave);

    // Mostrar el resultado
    cout << "Cadena cifrada: " << resultado << endl;

    return 0;
}
