#include <iostream>
#include <complex>

using namespace std;

int main() {
    // Definición de números complejos usando std::complex
    complex<double> num1(3.0, 4.0);  // 3 + 4i
    complex<double> num2(1.0, 2.0);  // 1 + 2i

    // Usando 'auto' para deducir el tipo de resultado
    auto sum = num1 + num2;         // Suma
    auto product = num1 * num2;     // Producto
    auto conjugate = conj(num1);    // Conjugado

    // Imprimir los resultados
    cout << "Número 1: " << num1 << endl;
    cout << "Número 2: " << num2 << endl;
    cout << "Suma: " << sum << endl;
    cout << "Producto: " << product << endl;
    cout << "Conjugado de Número 1: " << conjugate << endl;

    return 0;
}
