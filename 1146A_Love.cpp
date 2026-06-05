#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cont = 0;
    int otro = 0;

    for (char i : s) {
        if (i == 'a') {
            cont += 1;
        } else {
            otro += 1;
        }
    }
    while (otro >= cont) {
        otro -= 1;
    }
    cout << cont + otro << endl;

    return 0;
}

/*
Entrada:
 - Una línea: cadena s (contiene al menos una 'a')
Salida:
 - Un entero: longitud máxima de la cadena resultante donde 'a' > mitad
Ejemplo:
Entrada:
aaabbb
Salida:
4
*/