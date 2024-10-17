#include <iostream>
using namespace std;

int main() {
    int n;

    // Solicitar el tamaño de la matriz
    cout << "Ingrese el tamaño de la matriz cuadrada (n): ";
    cin >> n;

    // Declarar la matriz original y la matriz transpuesta
    int matriz[n][n];
    int transpuesta[n][n];

    // Solicitar al usuario que ingrese los elementos de la matriz
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Calcular la matriz transpuesta
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    // Imprimir la matriz transpuesta
    cout << "La matriz transpuesta es:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
