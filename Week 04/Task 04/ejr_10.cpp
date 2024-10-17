#include <iostream>
#include <string>
#include <cctype> // Para std::tolower

using namespace std;

int main() {
    string oracion;
    int contadorVocales[5] = {0}; // Contadores para a, e, i, o, u

    // Solicitar al usuario que ingrese una oración
    cout << "Ingrese una oración: ";
    getline(cin, oracion);

    // Contar las vocales en la oración
    for (char c : oracion) {
        c = tolower(c); // Convertir a minúscula para evitar distinción de mayúsculas y minúsculas
        
        switch (c) {
            case 'a':
                contadorVocales[0]++;
                break;
            case 'e':
                contadorVocales[1]++;
                break;
            case 'i':
                contadorVocales[2]++;
                break;
            case 'o':
                contadorVocales[3]++;
                break;
            case 'u':
                contadorVocales[4]++;
                break;
            default:
                // Si no es vocal, no hacemos nada
                break;
        }
    }

    // Imprimir los resultados
    cout << "Cantidad de vocales:" << endl;
    cout << "A: " << contadorVocales[0] << endl;
    cout << "E: " << contadorVocales[1] << endl;
    cout << "I: " << contadorVocales[2] << endl;
    cout << "O: " << contadorVocales[3] << endl;
    cout << "U: " << contadorVocales[4] << endl;

    return 0;
}
