#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    vector<int> numeros = {3, 5, 7, 2, 8, 1, 4};
    
    // Inicializamos el mayor elemento como el valor más pequeño posible
    int mayorElemento = numeric_limits<int>::min();

    for (size_t i = 0; i < numeros.size(); ++i) {
        if (numeros[i] > mayorElemento) {
            mayorElemento = numeros[i];
        }
        
        // Si encontramos el número más alto posible (suponiendo que no hay límites), podemos usar break
        // Sin embargo, dado que no sabemos los límites, no es necesario.
    }

    cout << "El mayor elemento en el vector es: " << mayorElemento << endl;

    return 0;
}
