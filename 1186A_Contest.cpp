#include <iostream>
using namespace std;

/*
Entrada:
 - Tres enteros: x a b (x = número de participantes, a = bolígrafos, b = cuadernos)
Salida:
 - "YES" si a >= x y b >= x, sino "NO"
Ejemplo:
Entrada:
3 3 4
Salida:
YES
*/

int main () {
    int x, a, b;
    cin >> x >> a >> b;  

    if (((a - x) >= 0) && ((b - x) >= 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}