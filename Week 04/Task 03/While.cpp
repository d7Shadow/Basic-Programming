#include <iostream>
#include <string>
using namespace std;
int main(){
    /* Tener bien clara una condición de finalización para el ciclo 
    tendremos prácticamente todo hecho.*/
    string password;
    cout << "A, B, C, D, E, F, G, H, I,\n";
    cout << "   J, K, L, M, N, O, P,\n";
    cout << "      Q, R, S, T, U,\n", 
    cout << "          W, X,\n";
    cout << "          Y, Z.\n";
    cout << "The password is 'Juan' in Cesar cipher.\n";
    cout << "Password: ";
    getline(cin, password);
    while(password != "NZES"){
        cout << "The password is incorrect!\n";
        cout << "Try again!\n";
        cout << "Password: ";
        getline(cin, password);
    }
    if(password == "NZES"){
        cout << "\nWelcome!\n";
    }
    system("PAUSE");
    return 0;
}