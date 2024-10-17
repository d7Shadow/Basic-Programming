#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Usando 'auto' para deducir el tipo de la variable
    auto x = 10;             // 'x' es deducido como 'int'
    auto y = 3.14;          // 'y' es deducido como 'double'
    auto text = "Hola";     // 'text' es deducido como 'const char*'

    // Usando 'auto' en un contenedor (vector)
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Usando 'auto' en un bucle para iterar sobre el vector
    for (auto num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Imprimir los valores deducidos
    cout << "x: " << x << ", y: " << y << ", text: " << text << endl;

    return 0;
}
