/*
Entrada:
 - Primera línea: carta sobre la mesa (dos caracteres, e.g. "AH")
 - Segunda línea: cinco cartas separadas por espacios
Salida:
 - "YES" si puedes jugar alguna carta (mismo valor o mismo palo), sino "NO"
Ejemplo:
Entrada:
AH
3D 4C 5H 6S 7D
Salida:
YES
*/

#include <iostream>
using namespace std;

int main() {
    string mesa;
    string mano[5];
    cin >> mesa;
    for (int i = 0; i < 5; ++i) {
        cin >> mano[i];
    }

    bool canPlay = false;
    for (int i = 0; i < 5; ++i) {
        if (mesa[0] == mano[i][0] || mesa[1] == mano[i][1]) {
            canPlay = true;
            break;
        }
    }

    if (canPlay)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}