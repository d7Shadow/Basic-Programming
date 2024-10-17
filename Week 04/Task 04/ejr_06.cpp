#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Pregunta {
    string texto;
    string respuestaCorrecta;
};

int main() {
    vector<Pregunta> preguntas = {
        {"¿Cuál es la capital de Francia?", "París"},
        {"¿Cuánto es 2 + 2?", "4"},
        {"¿Cuál es el océano más grande del mundo?", "Pacífico"},
        {"¿Qué año se independizó México?", "1821"},
        {"¿Quién escribió 'Cien años de soledad'?", "Gabriel García Márquez"}
    };

    int respuestasCorrectas = 0;
    int respuestasIncorrectas = 0;
    string respuestaUsuario;

    for (const auto& pregunta : preguntas) {
        cout << pregunta.texto << endl;
        cout << "Tu respuesta: ";
        getline(cin, respuestaUsuario);

        if (respuestaUsuario == pregunta.respuestaCorrecta) {
            cout << "¡Correcto!" << endl;
            respuestasCorrectas++;
        } else {
            cout << "Incorrecto. La respuesta correcta es: " << pregunta.respuestaCorrecta << endl;
            respuestasIncorrectas++;
        }
    }

    cout << "\nResultados finales:" << endl;
    cout << "Respuestas correctas: " << respuestasCorrectas << endl;
    cout << "Respuestas incorrectas: " << respuestasIncorrectas << endl;

    return 0;
}
