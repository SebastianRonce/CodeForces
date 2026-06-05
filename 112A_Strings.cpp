#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string x, y;

    cin >> x;
    cin >> y;

    transform(x.begin(), x.end(), x.begin(), ::tolower); // Convertir a minuscula un string
    transform(y.begin(), y.end(), y.begin(), ::tolower); // Convertir a minuscula un String 
    
    #include <iostream>
    #include <string>
    #include <algorithm>
    using namespace std;

    /*
    Entrada:
     - Dos líneas con cadenas (mayúsculas/minúsculas)
    Salida:
     - -1 si la primera < segunda, 1 si la primera > segunda, 0 si iguales (ignorando mayúsculas)
    Ejemplo:
    Entrada:
    aaa
    bbb
    Salida:
    -1
    */

    if (x < y) {
        cout << -1 << endl;
    } else if (x > y) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    
    return 0;
}
/*
A Petya le encantan los regalos. Su mamá le compró dos cuerdas del mismo tamaño para su cumpleaños. 
Las cuerdas están formadas por letras latinas mayúsculas y minúsculas. 
Ahora Petya quiere compararlas lexicográficamente . No importa si las letras están en mayúscula o minúscula; 
una letra mayúsculase considera equivalente a su correspondiente letra minúscula. Ayuda a Petya a realizar
 la comparación.
*/