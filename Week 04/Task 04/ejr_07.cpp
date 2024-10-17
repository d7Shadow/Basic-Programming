#include <iostream>
#include <vector>
#include <algorithm> // Para std::find

using namespace std;

int main() {
    vector<int> numeros = {1, 2, 3, 2, 4, 5, 3, 1, 6};
    vector<int> sinDuplicados;

    for (size_t i = 0; i < numeros.size(); ++i) {
        // Verificar si el número ya está en el vector sinDuplicados
        if (find(sinDuplicados.begin(), sinDuplicados.end(), numeros[i]) != sinDuplicados.end()) {
            continue; // Si ya existe, saltar a la siguiente iteración
        }

        // Agregar el número al vector sinDuplicados
        sinDuplicados.push_back(numeros[i]);
    }

    // Imprimir los resultados
    cout << "Vector sin duplicados: ";
    for (int num : sinDuplicados) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
