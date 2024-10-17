#include <iostream>
using namespace std;

int main() {
    const int ELEMENTS = 10; // Número de elementos
    int numbers[ELEMENTS]; // Arreglo para almacenar los números
    int sum = 0; // Variable para almacenar la suma de los números

    // Solicitar al usuario que ingrese 10 números
    cout << "Ingrese 10 numeros enteros:" << endl;
    for (int i = 0; i < ELEMENTS; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> numbers[i];
        sum += numbers[i]; // Sumar el número ingresado
    }

    // Calcular el promedio
    double average = static_cast<double>(sum) / ELEMENTS;
    cout << "El promedio es: " << average << endl;

    // Contar cuántos números son mayores que el promedio
    int count = 0;
    for (int i = 0; i < ELEMENTS; i++) {
        if (numbers[i] > average) {
            count++;
        }
    }

    // Mostrar el resultado
    cout << "Cantidad de numeros mayores que el promedio: " << count << endl;

    return 0;
}
