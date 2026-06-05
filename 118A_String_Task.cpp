/*
Entrada:
 - Una línea con una cadena (letras latinas)
Salida:
 - La cadena procesada: elimina vocales, inserta '.' antes de cada consonante y convierte a minúsculas
Ejemplo:
Entrada:
tour
Salida:
.t.r
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string palabra;
    string nuevo = "";
    cin >> palabra;
    transform(palabra.begin(), palabra.end(), palabra.begin(), ::tolower);
    for (char i: palabra){
        if (i != 'a' && i != 'e' && i != 'i' && i != 'o' && i != 'u' && i != 'y'){ 
            nuevo += '.';
            nuevo += i;
        }
        
    }
    cout << nuevo << endl;
    return 0;
}