/*
Entrada:
 - Una línea: cadena de '0' y '1' que describe posiciones de jugadores
Salida:
 - "YES" si existen al menos siete caracteres iguales consecutivos, sino "NO"
Ejemplo:
Entrada:
0000000
Salida:
YES
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int contador = 1;
    string text;
    cin >> text;

    vector<char> x(text.begin(), text.end());
    for (int i = 0; i < (int)x.size() - 1; i++) {
        if (contador == 7){
            break;
        }
        if (x[i] == x[i+1]) {
            contador++;
        } else {
            contador = 1;
        }
    }
    
    if (contador < 7) {
        cout << "NO" << endl; 
    } else {
        cout << "YES" << endl;
    }

    return 0;
}