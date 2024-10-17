#include <iostream>
#include <string>
using namespace std;
int main (){
    /* Simulador de scripts. */
    int pw;
    cout << " 1. Device update\n";
    cout << " 2. Metasploit\n";
    cout << " 3. Nmap\n";
    cout << " 0. (....)\n";
    cout << "    : ";
    cin >> pw;
    switch (pw){
    case 1:
        for(int i=10;  i<=100; i+=2){
            cout << "Download " << i << endl;
        }

        break;
    case 0:
        cout << "\nSee you!\n";

    
    default:
        break;
    }
    system("PAUSE");
    return 0;
}
