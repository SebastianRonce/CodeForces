#include <iostream>
#include <vector>
using namespace std;

/*
Entrada:
 - Primera línea: entero n
 - Segunda línea: cadena de n caracteres '0' o '1' (opiniones)
Salida:
 - "HARD" si existe al menos un '1', en caso contrario "EASY"
Ejemplo:
Entrada:
3
101
Salida:
HARD
*/

int main() {
    
    int n;
    int resp = 0;
    string opinion;
    cin >> n;
    cin.ignore(); // Para ignorar el salto de línea después de leer n
    getline(cin, opinion); // Para leer la línea completa de opiniones después de leer n
    vector<char> opi(opinion.begin(), opinion.end());

    for (int i = 0; i < (int)opi.size(); i++) {
        if (opi [i] == '1') {
            resp = 1;
            break;
        } else {
            resp = 0;
        }
    }
    if (resp == 1) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }
    return 0;
}