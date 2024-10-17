#include <iostream>
#include <string>
using namespace std;
    string cesarCipher(string name, int desplazamiento){
        string nameCipher="";
        for(int i=0; i<name.length(); i++){
            char letra=name[i];
            //Mayuscula
            if(isupper(letra)){
                letra = char(int(letra + desplazamiento - 'A') % 26 + 'A');
            }
            //Minuscula
            else if(islower(letra)){
                letra = char(int(letra + desplazamiento - 'a') % 26 - 'a');
            }
            nameCipher += letra;
        }
        return nameCipher;
    }
    string decifrarCesar(string nameCipher, int desplazamiento){
        return cesarCipher(nameCipher, 26 -desplazamiento);
    }
    int main(){
        string name;
        int desplazamiento, op;
        do{
            cout << " 1. Name encrypted\n";
            cout << " 2. Desincriptar name\n";
            cin >> op;
            if(op == )
            //Falta terminar.

        }
        
    }
