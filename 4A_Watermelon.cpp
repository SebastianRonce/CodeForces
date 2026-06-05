/*
Entrada:
 - Un entero w (peso de la sandía)
Salida:
 - "YES" si se puede dividir en dos partes enteras y pares (>0), sino "NO"
Ejemplo:
Entrada:
8
Salida:
YES
*/

#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;

    if (w % 2 == 0 && w != 2)
    {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}
